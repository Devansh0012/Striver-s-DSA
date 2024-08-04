#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void count() {
    if (cnt == 4) return;
    cout << cnt << " ";
    cnt++;
    count();
}

int main() {
    count();
    return 0;
}