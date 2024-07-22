#include<bits/stdc++.h>
using namespace std;

//Pairs
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

//Vectors
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);

    vector<int> v2(3, 50); // {50, 50, 50}
    vector<int> v3(5); // {0, 0, 0, 0, 0}
    vector<int> v4(v2); // copy of v2

    cout << v[0] << " " << v.at(0) << endl; // v[0] doesn't check out of bounds, v.at(0) does
    cout << v.back() << endl; // last element

    vector<int>::iterator it = v.begin(); // auto it = v.begin();
    it++;
    cout << *(it) << endl;

    vector<int> :: iterator it = v.end(); // points to next of last element
    vector<int> :: reverse_iterator it = v.rend(); // reverse iterator
    vector<int> :: reverse_iterator it = v.rbegin(); // reverse begin

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
}


int main(){
    return 0;
}