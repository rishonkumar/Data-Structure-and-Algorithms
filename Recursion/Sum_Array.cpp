#include<iostream>
using namespace std;

int sum(int input[], int n) {

    if(n == 0) {
        return 0;
    }

    return input[0] + sum(input+1,n-1);
}


int helper(int startIndex , int ar[] , int n) {

    if(startIndex == n) {
        return 0;
    }

    return ar[startIndex] + helper(startIndex+1,ar,n);
}

int sum1(int ar[] , int n) {
    return helper(0,ar,n);
}