#include<bits/stdc++.h>
using namespace std;

//does not return anything
void printHello() {
    cout << "Hello" << endl;
}

int sum(int a , int b) {
    int r = a+b;
    return r;
}

int digitSum(int n) {
    int sum = 0;
    while(n) {
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}

int main() {
    printHello();
    cout << sum(2,3);

    int a,b;
    cin >> a >> b;
    cout << digitSum(a) + digitSum(b);

    return 0;
}