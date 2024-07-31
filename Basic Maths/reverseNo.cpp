#include <bits/stdc++.h>
using namespace std;

int reverseNo(int n){
    int reversedNo = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reversedNo = reversedNo * 10 + lastDigit;
        n = n / 10;
    }
    return reversedNo;
}

// Time Complexity: O(log10(n)) -> log base 10 of n is the number of digits in n

int main(){
    int n;
    cin >> n;
    cout << reverseNo(n) << endl;
}