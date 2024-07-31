#include <bits/stdc++.h>
using namespace std;

vector<long long> lcmAndGcd(long long A , long long B) {
    vector<long long> ans;
    long long a = A, b = B;
    while(a > 0 && b > 0) {
        if(a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    ans.push_back(A / (a + b) * B);
    ans.push_back(a + b);
    return ans;
}

int main() {
    long long A, B;
    cin >> A >> B;
    vector<long long> ans = lcmAndGcd(A, B);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}