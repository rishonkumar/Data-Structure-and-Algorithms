// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/#

#include<bits/stdc++.h>
using namespace std;

// push first k element in priority queue 
// then iterate from k element if current element is smaller than queue top pop the 
// from queue and push the current element

int kthSmallest(int arr[], int l, int r, int k)
    {
        priority_queue<int>pq;

        // step 1:

        for(int i = 0; i < k ; i++) {
            pq.push(arr[i]);
        }

        // step 2:
        for(int i = k; i <= r; i++) {
            if(arr[i] < pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }

        int ans = pq.top();

        return ans;
    }