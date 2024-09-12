#include <bits/stdc++.h>
using namespace std;

void MergeSort(int arr[], int n){
    if(n == 1){
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0; i<mid; i++){
        left[i] = arr[i];
    }
    for(int i=mid; i<n; i++){
        right[i-mid] = arr[i];
    }
    MergeSort(left, mid);
    MergeSort(right, n-mid);
    int i = 0, j = 0, k = 0;
    while(i < mid && j < n-mid){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        }else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < mid){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n-mid){
        arr[k] = right[j];
        j++;
        k++;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    MergeSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}