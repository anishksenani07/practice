#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter number of rows and columns:\n";
    cin >> rows >> cols;

    int matrix[rows][cols];
    cout << "Enter Elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    bool found = false;

    for(int i = 0; i < rows; i++){
        int minRowVal = matrix[i][0];
        int colIndex = 0;

        for(int j = 0; j < cols; j++){
            if(matrix[i][j] < minRowVal){
                minRowVal = matrix[i][j];
                colIndex = j;
            }
        }

        bool isLargestInCol = true;
        for(int k = 0; k < rows; k++){
            if(matrix[k][colIndex] > minRowVal){
                isLargestInCol = false;
                break;
            }
        }

        if(isLargestInCol){
            cout << "Found: " << minRowVal << "at pos: " << i + 1 << ", " << colIndex + 1 << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Not Found!";
    }
    return 0;
}