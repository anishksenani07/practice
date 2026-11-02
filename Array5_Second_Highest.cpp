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

    // obviously sorting is fastest
    // this is brute force
    int highestEl = INT_MIN;
    int secondHighestEl = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > highestEl){
            secondHighestEl = highestEl;
            highestEl = arr[i];
        }
        else if(arr[i] > secondHighestEl && arr[i] != highestEl){
            secondHighestEl = arr[i];
        }
    }

    cout << "The Second Highest Element in the array is: " << secondHighestEl
    << endl;

    return 0;
}