#include<bits/stdc++.h>
using namespace std;

// Pairs

void expain() {
    pair<int,int>p = {1,3};

    cout << p.first << " " << p.second;

    pair<int,pair<int,int>>p1 = {1,{3,4}};

    cout << p1.first << " " << p1.second.second << " " << p1.second.first;

    pair<int,int>arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second; // 5
}

// vectors
void explainVector() {

    vector<int>v;

    v.push_back(1);
    v.emplace_back(2); // faster than push back

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>v1(5,100);// 100 100 100 100 100

    vector<int>V2(5);  // {0,0,0,0,0}'

    vector<int>v3(v1); // copying

    //Accessing using iterator

    vector<int>::iterator it = v1.begin(); // it points to memory

    // to access the element use *
    it++;
    cout << *(it) << " "; 

    vector<int>::iterator it = v1.end(); // this will point memory after last element 

    // Printing using iterators
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++) cout << *(it) ;

    for(auto it = v1.begin(); it != v.end(); it++) cout << *(it) ;

    for(auto it : v) cout << it;

    // 10,20,12,23
    v1.erase(v.begin()+1);

    // 10,20,12,23,35
    v1.erase(v1.begin()+2,v.begin()+4); // 10,20,35

}

void explainList() {
    // similar to vector but gives front opeations

    list<int>ls;

    ls.push_back(2);

    ls.push_front(5);
}

void explainDeque() {

    deque<int>dq;

    dq.push_back(1);
    dq.pop_back();
    dq.pop_front();
}
// LIFO
void explainStack() {
    stack<int>st;
    st.push(1);
    st.push(3);

    st.pop();

    cout << st.top();

    cout << st.size();

    stack<int>s1;

    s1.swap(st);
}

// Queue FIFO
void explainQueue() {
    queue<int>q;
    q.push(1);
    q.emplace(4);

    q.back();

    q.front();

    q.pop(); // delete front element
}

void explainPQ() {
// Max heap
    priority_queue<int>pq;

    pq.push(5); //5

    pq.push(2); // 5,2

    pq.push(8); // 8,5,2

    pq.top(); // 8

    pq.pop();


    // Minimum heap
    priority_queue<int,vector<int>,greater<int>>p12;

    p12.push(5); // 5

    p12.push(2); // 2,5
    p12.push(8); //  2,5,8

}

// Set - sorted and unique elemnt

void explainSet() {
    set<int>st;

    st.insert(1); //1
    st.insert(12); // 1 , 12
    st.insert(12); // 1,12
    st.insert(4); // 1,4,12

    int cnt = st.count(1); 

    auto it = st.find(12);

    // check lower and upper bound

}

// multi set - sorted and store all elemnts
void explainMultiset() {
    multiset<int>ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // 1 1 1

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single one erased
    
}

// Key value pair unique key
// Key any data type
// store in sorted key
void explainMaps() {
    map<int,int>mpp;

    map<int,pair<int,int>>mp1;

    map<pair<int,int>,int>mp2;

    mpp[1] = 2; // {1,2} key 1 val 2

    mpp.insert({2,4});

    mp2[{2,3}] = 10; // key 2,3 val is 10

    for(auto it: mpp) {
        cout << it.first << " " << it.second << endl;
    
    }
}

void explainMultiMap() {
    // same as map, only it stores multiple key

}

void explainUnorderedMap() {
    //same as map but doesnt store in sorted order

}

// similar to set but doesnt store in sorted it stores in any order and unique elements
// upper and lowr bound does not work
void explainUSet() {
    unordered_set<int>st;
}

bool comp(pair<int,int>p1,pair<int,int>p2) {
   
    if(p1.second < p2.second) return true;

    if(p1.second > p2.second) return false;
    // it will do internal swapping
    if(p1.first > p2.first) return true;
    return false;
} 

int main() {

    // Inbult functions
    int n; cin >> n;
    int arr[n];
    sort(arr, arr+n);

    vector<int>v;
    sort(v.begin(),v.end());

    // Descending prder
    sort(arr,arr+n,greater<int>);

    // if we want to sort in your way

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    //sort it A.T second element
    // if second element is same then sort
    // it A.T to first elemnt but in decending
    // O/P - {4,1} {2,1} {1,2}
    sort(a,a+n,comp);

    // to print permutation of string
    string s = "123";

    do {
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));


    // Max element in array
    int maxi = *max_element(arr,arr+n);

}



