
/*
Formula
(a+b) % M = ((a%M)+(b%M))%M
(a*b) % M = ((a%M)*(b%M))%M
(a-b) % M = ((a%M)-(b%M)+M)%M
(a/b) % M = ((a%M)*(b^-1)%M)%M
*/
/*
Cal factorial 
n = 100 // we cant store this value

so in Q it will be given print answer module M
where M = 47

A%M -> means ans will be always less than 47
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for(int i = 2 ; i<=n ; i++) {
        fact = (fact*i)%M;
    }
    cout << fact;
}