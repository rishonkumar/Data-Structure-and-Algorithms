#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/spiral-matrix-ii/
 
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

       vector<vector<int>>ans(n, vector<int>(n,1));
       int l = 0, r = n-1, t = 0, d = n-1, idx = 1;

       while(l <= r and t <= d) {
           //first row
           for(int j = l ; j <= r ; j++) {
               ans[t][j] = idx;
               idx++;
           }
           t++;

            //last col
           for(int i = t ; i <= d ; i++) {
               ans[i][r] = idx;
               idx++;
           }

           r--;
            //last row
           for(int j = r ; j >= l ; j--) {
               ans[d][j] = idx;
               idx++;
           }

           d--;
            //first col
           for(int i = d ; i >= t ; i--) {
               ans[i][l] = idx;
               idx++;
           }
           l++;
       }
       return ans; 
    }
};