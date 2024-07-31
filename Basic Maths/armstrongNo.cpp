#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
    int originalNo = n;
    int sum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if(sum == originalNo){
        cout << "Yes, it is an Armstrong number" << endl;
    }
    else{
        cout << "No, it is not an Armstrong number" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    checkArmstrong(n);
}