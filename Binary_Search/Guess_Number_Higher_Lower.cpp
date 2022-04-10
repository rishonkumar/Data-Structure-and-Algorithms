//https://leetcode.com/problems/guess-number-higher-or-lower/

#include<bits/stdc++.h>
using namespace std;
 
 

    int guessNumber(int n) {
        
        int l = 1 , h = n;

        while(l <= h) {

            int m = l + (h-l)/2;

            int ans = guess(m);

            if(ans == 0)
                return m;

            else if(ans == 1) 
                l = m+1;
            
            else 
                h = m-1;
        }

        return -1;
    }