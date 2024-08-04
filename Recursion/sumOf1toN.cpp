#include <bits/stdc++.h>
using namespace std;

//paramertized Recursion:
int add(int i, int sum){
    if(i < 1){
        cout << "Sum: " << sum << endl;
        return sum;
    }
    add(i-1, sum+i);
}

// Functional Recursion:
int add2(int i){
    if(i < 1){
        return 0;
    }
    return i + add2(i-1);
}

int main(){
    int n;
    cin >> n;
    add(n, 0);
    add2(n);
    cout << "Sum: " << add2(n) << endl;
    return 0;
}