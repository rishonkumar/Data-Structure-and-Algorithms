
/*
Given array a of N integers. Given Q queries and in each 
query given L and R print sum of array elements from 
index L to R (L,R included)
*/
//If Prefix sum try to use 1 based index
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];
int prefix[N];
int main() {
 
    int n;
    cin >> n;
 
    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }

    int q;
    cin >> q;
    while(q--) {
        int l,r;
        cin >> l >> r;
        //long long sum = 0;
        // for(int i = l ; i <= r ; i++) {
        //     sum += a[i];
        // }
        // cout << sum << endl;

        cout << prefix[r] - prefix[l-1] << endl;
    }
    //O(N) + O(Q*N) - O(N^2)
}