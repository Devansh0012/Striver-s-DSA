#include <bits/stdc++.h>
using namespace std;

void swapArray(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    swap(arr[start], arr[end]);
    swapArray(arr, start+1, end-1);
}

// Using a single pointer
void swapArray2(int arr[], int start, int n){
    if(start >= n/2){
        return;
    }
    swap(arr[start], arr[n-start-1]);
    swapArray2(arr, start+1, n);
}

int main(){
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    n = sizeof(arr)/sizeof(arr[0]);
    swapArray2(arr, 0, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}