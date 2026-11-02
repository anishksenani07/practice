#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: \n";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: \n";
    cin >> key;

    int foundIndex = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            foundIndex = i;
        }
    }

    if (foundIndex != -1) {
    cout << "Found at index: " << foundIndex << endl;
    } 
    else {
    cout << "Element not found" << endl;
    }
    return 0;
}