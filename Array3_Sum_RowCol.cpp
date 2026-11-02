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
    // ROW SUM
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < cols; j++){
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << ": " << rowSum <<endl;
    }

    //COL SUM
    for(int j = 0; j < cols; j++){
        int colSum = 0;
        for(int i = 0; i < rows; i++){
            colSum += matrix[i][j];
        }
        cout << "Sum of Col " << j + 1 << ": " << colSum << endl; 
    }
    return 0;
}