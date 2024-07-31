#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime using n
// Time complexity: O(n)
bool checkPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Function to check if a number is prime using sqrt(n)
// Time complexity: O(sqrt(n))

bool checkPrime2(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(checkPrime2(n)){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
}