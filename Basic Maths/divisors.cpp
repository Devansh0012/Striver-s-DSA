#include <bits/stdc++.h>
using namespace std;

// Function to print all divisors of a number n
// Time complexity: O(n)
int divisors(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
//to reduce time complexity we can iterate upto sqrt(n) and print both i and n/i
//Time complexity: O(sqrt(n))
int divisors2(int n){
    vector<int> divs;
    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != n/i){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    for(int i = 0; i < divs.size(); i++){
        cout << divs[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    divisors2(n);
}
