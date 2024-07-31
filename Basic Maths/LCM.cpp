#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return a + b;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}