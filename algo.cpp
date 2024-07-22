#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.first > p2.first) return true;
    return false;
}

void explainAlgo(){
    vector<int> a; // {5, 4, 2, 1, 3}
    sort(a.begin(),a.end()); // sort(start, end) // {1, 2, 3, 4, 5}
    int arr[] = {1,5,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]); // 5
    sort(arr, arr+n); // {1, 2, 3, 4, 5}
    sort(arr+2, arr+4); // {1, 5, 2, 3, 4}
    sort(arr, arr+n, greater<int>()); // {5, 4, 3, 2, 1}

    pair<int,int>a1[] = {{1,2}, {2,1}, {4,1}};
    //sort it according to second element
    //if second element is same then sort according to first element
    //but in decreasing order
    sort(a1, a1+n, comp); // {{4,1}, {2,1}, {1,2}}
    // if we want to sort in increasing order then
    // just change the return statement of comp function
    // if(p1.first < p2.first) return true;
    // return false;
    // then it will sort in increasing order

    int num = 7;
    int cnt = __builtin_popcount(num); // 3 (7 = 111) so 3 set bits are there in 7

    long long num1 = 1000000000000000000;
    int cnt1 = __builtin_popcountll(num1); // 17 (1000000000000000000 = 1 followed by 18 zeros) so 17 set bits are there in 1000000000000000000

    string s = "231";
    sort(s.begin(), s.end()); // 123
    do{
        cout<<s<<endl; // 123 132 213 231 312 321
    } while(next_permutation(s.begin(), s.end())); // it will print all the permutations of the string s in lexicographically increasing order

    int maxi = *max_element(a.begin(), a.end()); // 5

}

int main(){
    return 0;
}