#include<iostream>
using namespace std;

int power(int x, int n) {

    if(n == 1)
        return x;

    int smallOutput = x*power(x,n-1);

    return smallOutput;
}

int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}
