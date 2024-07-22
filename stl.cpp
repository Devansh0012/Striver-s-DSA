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

    //insert function
    vector<int> v5(2,100); // {100, 100}
    v5.insert(v5.begin(), 5); // {5,100,100}
    v5.insert(v5.begin(), 2, 10); // {10,10,5,100,100}
    v5.insert(v5.begin()+1, 3, 20); // {10,20,20,20,5,100,100}

    //erase function
    v5.erase(v5.begin()); // {20,20,20,5,100,100}
    v5.erase(v5.begin()+1); // {20,20,5,100,100}
    v5.erase(v5.begin()+2, v5.begin()+4); // {20,20,100,100}


    v.pop_back(); // {20,20,100}
    v.clear(); // remove all elements
    v.empty(); // check if empty
    v.resize(10); // size 10, all elements 0
    v.size(); // size of vector
}

//List
void explainList(){
    list<int> ls; // doubly linked list
    ls.push_back(2); // {2}
    ls.push_back(3); // {2, 3}
    ls.push_front(1); // {1, 2, 3}
    ls.emplace_back(4); // {1, 2, 3, 4}
    ls.emplace_front(0); // {0, 1, 2, 3, 4}

    for(auto i: ls){
        cout << i << " "; // 0 1 2 3 4
    }
    cout << endl;

    ls.pop_back(); // {0, 1, 2, 3}
    ls.pop_front(); // {1, 2, 3}

    list<int> ls2(3, 100); // {100, 100, 100}
    list<int> ls3(ls2); // copy of ls2

    list<int> :: iterator it = ls.begin();
    it++;
    ls.insert(it, 5); // {100, 5, 100, 100}
    it = ls.begin();
    advance(it, 2);
    ls.erase(it); // {100, 5, 100}

    ls.remove(100); // {5}
    ls.size(); // size of list
    ls.empty(); // check if empty
    ls.reverse(); // reverse the list
    ls.sort(); // sort the list
}

//Deque
void explainDeque(){
    deque<int> dq; // double ended queue
    dq.push_back(1); // {1}
    dq.push_back(2); // {1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_back(4); // {3, 1, 2, 4}
    dq.emplace_front(5); // {5, 3, 1, 2, 4}

    for(auto i: dq){
        cout << i << " "; // 5 3 1 2 4
    }
    cout << endl;

    dq.pop_back(); // {5, 3, 1, 2}
    dq.pop_front(); // {3, 1, 2}

    deque<int> dq2(3, 100); // {100, 100, 100}
    deque<int> dq3(dq2); // copy of dq2

    dq.size(); // size of deque
    dq.empty(); // check if empty
    dq.resize(10); // size 10, all elements 0
}

//Stack
void explainStack(){
    stack<int> st; // LIFO
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}

    cout << st.top() << endl; // 3
    st.pop(); // {2, 1}
    cout << st.top() << endl; // 2
    cout << st.size() << endl; // 2
    cout << st.empty() << endl; // 0
    //complexity of stack is O(1)
}

//Queue
void explainQueue(){
    queue<int> q; // FIFO
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}

    cout << q.front() << endl; // 1
    cout << q.back() << endl; // 3
    q.pop(); // {2, 3}
    cout << q.front() << endl; // 2
    cout << q.size() << endl; // 2
    cout << q.empty() << endl; // 0
    //complexity of queue is O(1)
}

//Priority Queue
void explainPriorityQueue(){
    priority_queue<int> pq; // max heap
    pq.push(5); // {5}
    pq.push(1); // {5, 1}
    pq.push(10); // {10, 5, 1}
    pq.push(30); // {30, 10, 5, 1}

    cout << pq.top() << endl; // 30
    pq.pop(); // {10, 5, 1}
    cout << pq.top() << endl; // 10
    cout << pq.size() << endl; // 3
    cout << pq.empty() << endl; // 0

    priority_queue<int, vector<int>, greater<int>> pq2; // min heap
    pq2.push(5); // {5}
    pq2.push(1); // {1, 5}
    pq2.push(10); // {1, 5, 10}
    pq2.push(30); // {1, 5, 10, 30}

    cout << pq2.top() << endl; // 1
    pq2.pop(); // {5, 10, 30}
    cout << pq2.top() << endl; // 5
    cout << pq2.size() << endl; // 3
    cout << pq2.empty() << endl; // 0
    //complexity of priority queue is O(logn)
}

//Set
void explainSet(){
    //set stores unique elements in sorted order
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    //Functionality of insert in vector
    //can be used also, that only increases efficiency

    //begin(), end(), rbegin(), rend(), size(), empty(), clear()
    //erase(), find(), count() are same as above.

    // {1, 2, 3, 4}
    for(auto i: st){
        cout << i << " "; // 1 2 3 4
    }
    cout << endl;

    auto it = st.find(2); // points to 2
    if(it == st.end()){
        cout << "Not found" << endl;
    } else {
        cout << "Found" << endl;
    }
    st.count(2); // 1
    st.erase(2); // {1, 3, 4}
    st.size(); // size of set
    st.empty(); // check if empty
    st.clear(); // remove all elements
}

//Multiset
void explainMultiset(){
    //multiset stores multiple elements in sorted order
    //everything else is same as set except unique elements
    multiset<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2, 2}
    st.insert(4); // {1, 2, 2, 4}
    st.insert(3); // {1, 2, 2, 3, 4}

    //begin(), end(), rbegin(), rend(), size(), empty(), clear()
    //erase(), find(), count() are same as above.

    // {1, 2, 2, 3, 4}
    for(auto i: st){
        cout << i << " "; // 1 2 2 3 4
    }
    cout << endl;

    auto it = st.find(2); // points to 2
    if(it == st.end()){
        cout << "Not found" << endl;
    } else {
        cout << "Found" << endl;
    }
    st.count(2); // 2
    st.erase(2); // {1, 3, 4} // all 2's removed
    st.erase(st.find(2)); // {1,2,3,4} // only one 2 removed
    st.size(); // size of set
    st.empty(); // check if empty
    st.clear(); // remove all elements
}

//Unordered Set
void explainUnorderedSet(){
    unordered_set<int> st;
    //lower_bound and uppper_bound functions are not available
    //rest all functions are same as set
    //does not store elements in particular order like set
    //better time complexity than set in most cases,
    //except when some collisions happen.
}

//Map
void explainMap(){
    //stores in key value pairs in sorted order of keys.
    //keys are unique
    map<int, int>mpp; // key, value
    map<int, pair<int, int>>mpp; // key, {value1, value2}
    map<pair<int, int>, int>mpp; // {key1, key2}, value

    mpp[1] = 2; // {1:2}
    mpp.emplace(3, 1); // {1:2, 3:1}
    mpp.insert({2,4}); // {1:2, 3:1, 2:4}
    mpp.emplace(1, make_pair(2, 3)).first->second = 10; // {1:10, 3:1, 2:4}

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl; // 1 10, 3 1, 2 4
    }

    cout << mpp[1]; // 10
    cout << mpp[5]; // 0, if key not present, it will insert 0

    auto it = mpp.find(3); // points to 3
    cout << (*it).first << endl; // 1

    //erase, size, empty, clear, begin, end, rbegin, rend are same as set
}

//Multimap
void explainMultimap(){
    //everything is same as map except keys are not unique
    //can have multiple values for same key
    //only mpp[key] will not work
}

//Unordered Map
void explainUnorderedMap(){
    //everything is same as map except keys are not sorted
    //better time complexity than map in most cases
    //lower_bound and upper_bound functions are not available
    //same as set and unordered set difference
}

int main(){
    return 0;
}