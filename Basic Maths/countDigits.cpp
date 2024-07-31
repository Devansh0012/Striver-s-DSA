#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}
int count(int n){
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

// Time Complexity: O(log10(n)) -> log base 10 of n is the number of digits in n

int main(){
    int n;
    cin >> n;
    //cout << countDigits(n) << endl;
    cout << count(n) << endl;
}