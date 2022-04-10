//https://leetcode.com/problems/valid-perfect-square/

    bool isPerfectSquare(int num) {

        long l = 1 , r = num;

        while(l <= r) {

            int m = l+(r-l)/2;

            // mid is small -> go right to increase mid
            if(m*m == num) return true;
            // mid is large -> to left to decrease mid
            if(m*m < num) l = m+1;

            else r = m-1;
        } 
        return false;  
    }