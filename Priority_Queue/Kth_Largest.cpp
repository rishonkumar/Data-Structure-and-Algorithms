#include<bits/stdc++.h>
using namespace std;


class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq; // min heap
    int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        //push into queue
        for(int i = 0 ; i < nums.size() ; i++) {
            pq.push(nums[i]);
            //if size of queue is greater than k 
            //pop - it will pop the smallest element
            if(pq.size() > k)
                pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > size) {
            pq.pop();
        }
        // it will return the kth largest element
        return pq.top();
    }
};