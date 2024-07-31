#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int reversedNo = 0;
    int originalNo = n;
    while(n > 0){
        int lastDigit = n % 10;
        reversedNo = reversedNo * 10 + lastDigit;
        n = n / 10;
    }
    if(reversedNo == originalNo){
        cout << "Yes, it is a palindrome" << endl;
    }
    else{
        cout << "No, it is not a palindrome" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    checkPalindrome(n);
}