//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        priority_queue<long long, vector<long long>, greater<long long>>pq;

        for(int i = 0 ; i < n ; i++) {
            pq.push(arr[i]);
        }
        long long cost = 0;
        
        while(pq.size() > 1) {

            long long top1 = pq.top();
            pq.pop();
            
            long long top2 = pq.top();
            pq.pop();

            long long sum = 0;
            sum = top1+top2;
            
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }
};
 
 