/*
Given array a of n integers. given n queries and in
each query a number x, print count of that number
in array

Constraints
1 <= n <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];

int main() {

    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;

        //int ct = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(a[i] == x)
        //         ct++;
        // }
        //cout << ct << endl ;
        cout << hsh[x] << endl;
    }
    //TC - O(N) + O(Q*N) = O(N^2) = 10^10 > 10^
    //TC - O(N) = 10^5
}
