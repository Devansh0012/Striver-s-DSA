#include <bits/stdc++.h>
using namespace std;

int fact(int i){
    if(i == 0){
        return 1;
    }
    return i * fact(i-1);
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}