#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter number of rows and columns:\n";
    cin >> rows >> cols;

    int matrix[rows][cols];
    int nonZeroCnt = 0;

    cout << "Enter Elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] != 0){
                nonZeroCnt++;
            }
        }
    }

    int tupleMatrix[100][3];
    tupleMatrix[0][0] = rows;
    tupleMatrix[0][1] = cols;
    tupleMatrix[0][2] = nonZeroCnt;

    int k = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] != 0){
                tupleMatrix[k][0] = i;
                tupleMatrix[k][1] = j;
                tupleMatrix[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    cout << "\n--- Original Matrix ---\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n--- 3-Tuple Representation ---\n";
    cout << "Row\tCol\tValue\n";
    cout << "---------------------\n";
    for (int i = 0; i <= nonZeroCnt; i++) {
        cout << tupleMatrix[i][0] << "\t"
            << tupleMatrix[i][1] << "\t"
            << tupleMatrix[i][2] << "\n";
    }

    int ogSize = rows * cols;
    int newSize = (nonZeroCnt + 1) * 3;

    if(ogSize > newSize){
        float saved = ((float)(ogSize - newSize) / ogSize);
        cout << "Storage Saved: " << saved << "%\n";
    }
    else{
        cout << "Matrix is not sparse enough to save space.\n";
    }
    return 0;
}