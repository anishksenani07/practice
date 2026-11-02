#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array (atleast 2): \n";
    cin >> n;

    if(n < 2) cout << "Atleast 2 elements required\n";

    int arr[n];
    cout << "Enter " << n << " Elements: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // BRUTE FORCE
    // int minSum = INT_MAX;
    // int el1 = arr[0];
    // int el2 = arr[1];

    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         int currSum = arr[i] + arr[j];
    //         if(abs(currSum) < abs(minSum)){
    //             minSum = currSum;
    //             el1 = arr[i];
    //             el2 = arr[j];
    //         }
    //     }
    // }

    //SORTING FASTER
    sort(arr, arr + n); 
    // write a sorting algo 
    //(INSERTION, SELECTION, MERGE, QUICK, BUBBLE)
    int left = 0; 
    int right = n - 1;

    int minSum = INT_MAX;
    int el1 = arr[0];
    int el2 = arr[1]; 

    while(left < right){
        int currSum = arr[left] + arr[right];

        if(abs(currSum) < abs(minSum)){
            minSum = currSum;
            el1 = arr[left];
            el2 = arr[right];

            if(currSum < 0){
                left++;
            }
            else if(currSum > 0){
                right--;
            }
            else break;
        }
    }

    cout << "The two elements whose sum is closest to zero are: " << el1 <<" and " << el2 << endl;
    return 0;

}