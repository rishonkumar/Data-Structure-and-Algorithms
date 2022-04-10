//https://leetcode.com/problems/top-k-frequent-elements/
#include<bits/stdc++.h>
using namespace std;
 

     vector<int> topKFrequent(vector<int>& nums, int k) {
         
         unordered_map<int,int>memo;
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>min_heap;

         //push into the map
         for(auto i : nums) {
             memo[i]++;
         }

         //push the map into min heap as a pair 
         // first - element, second - count
         for(auto &i : memo) {
             min_heap.push({i.second,i.first});
             //if heap contains increase size k then pop
             if(min_heap.size() > k)
                min_heap.pop();
         }

         vector<int>ans;
         //push the second(element) into the vector answer from heap
         while(k--) {
             ans.push_back(min_heap.top().second);
             min_heap.pop();
         }
         return ans; 
    }
 
