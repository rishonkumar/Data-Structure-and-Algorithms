//https://leetcode.com/problems/contains-duplicate/
#include<bits/stdc++.h>
using namespace std;

    bool containsDuplicate1(vector<int>& nums) {
        int n = nums.size();    
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < n ; i++) {
            if(nums[i] == nums[i-1])
                return true;
        }
        return false;
    }

   bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>m;
       //add it in map
       for(int i = 0 ; i < nums.size() ; i++) m[nums[i]]++;

       //iterate the map and check the second if greater than 2
       for(auto i : m) {
           if(i.second >= 2) 
                return true;
       }
       return false;
   } 
