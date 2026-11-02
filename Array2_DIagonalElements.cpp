#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the order of the square matrix:\n";
    cin >> n;

    int matrix[n][n];
    cout << "Enter Elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for(int i = 0; i < n; i++){
        // Primary Diagonal
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - i - 1];
    }

    cout << "Primary Sum: " << primarySum << endl;
    cout << "Secondary Sum: " << secondarySum << endl;

    return 0;
}