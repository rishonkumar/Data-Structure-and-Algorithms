#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
 

//max heap
priority_queue<int>pq;

pq.push(4);
pq.push(2);
pq.push(5);
pq.push(3);

cout << "Element at top " << pq.top() << endl; //return the max element

pq.pop();

cout << "Element at top " << pq.top() << endl;

cout << "Size" << pq.size() << endl;

// Min heap

priority_queue<int,vector<int>,greater<int>>minHeap;

minHeap.push(4);
minHeap.push(2);
minHeap.push(5);
minHeap.push(3);

cout << "Element at top " << minHeap.top() << endl; //return the min element

}