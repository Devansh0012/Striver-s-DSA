#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int minIndex = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    SelectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}