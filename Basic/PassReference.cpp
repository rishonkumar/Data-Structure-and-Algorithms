#include<bits/stdc++.h>
using namespace std;
//Arrays always pass by reference

void increment(int &n) {
    n++;
}

int main() {

    int a = 3;

    cout << a << endl;
     
    // a = increment(a);
    increment(a);

    cout << a << endl;
}