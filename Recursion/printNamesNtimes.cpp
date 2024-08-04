#include <bits/stdc++.h>
using namespace std;

void name(int i, int n){
    if(i > n) return;
    cout << "Devansh\n";
    name(i+1,n);
}

int main(){
    int n;
    cin >> n;
    name(1,n);
    return 0;
}

// Time Complexity: O(n) where n is the number of times the name is to be printed.
// Space Complexity: O(n) where n is the number of times the name is to be printed.