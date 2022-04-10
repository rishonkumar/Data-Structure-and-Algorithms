#include<iostream>
using namespace std;

int factorial(int n) {
    
    // cout << n << endl;
    //Base case
    if(n == 0) {
        return 1;
    }

    int smallOutput = factorial(n-1);

    return n*smallOutput;
    
}

int main() {
    int n;
    cin >> n;

    int op = factorial(n);
    cout << op << endl;
}