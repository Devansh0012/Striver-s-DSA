// Max Sum with Indices at Least K+1 distance Apart
/*
You are given an array a of N integers and an integer K. Your task is to find the maximum sum of any two elements in the array such that the indices of those two elements differ by at least k+1 i.e. a[i]+a[j] should be maximum and |i-j|<=(K+1).

Input Format

The first line contains two space-separated integers n and k.

The second line contains an array of n integers

Constraints

1 ≤ N ≤ 1e6

1 ≤ K ≤ n-2

0 ≤ a[i] ≤ 1e9

Output Format

The output return an integer, maximum sum of any two elements in array such that their indices differ by at least K+1.

Sample Input 0
6 3
3 8 4 7 4 3
Sample Output 0
11
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+k+1; j<n; j++){
            ans = max(ans, a[i]+a[j]);
        }
    }
    cout << ans << endl;
    return 0;
}