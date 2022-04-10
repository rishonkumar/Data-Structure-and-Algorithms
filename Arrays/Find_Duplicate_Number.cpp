
#include<bits/stdc++.h>
using namespace std;


    int findDuplicate(vector<int>& nums) {

        //Find the intersection point of two runners
        int slow = nums[0];
        int fast = nums[nums[0]];

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        //Find the entrance to the cycle
        fast = 0;
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
        
    }