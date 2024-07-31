#include <bits/stdc++.h>
using namespace std;

// Function to find the greatest common divisor of two numbers a and b
// Time complexity: O(log(min(a, b)))
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

//to find gcd without using function gcd
int gcd2(int a, int b){
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
            break;
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << gcd2(a, b) << endl;
}
