#include<bits/stdc++.h>
using namespace std;

int main() {
    int x = 4;
    int *p_x = &x;

    cout << "Add x : " << &x << endl;
    cout << "Value p_x : " << p_x << endl;
    // * -> Value at
    cout << "Value *p_x : " << *p_x << endl;
    *p_x = 5;
    cout << "X : " << x << endl;

    //Double pointers - store add of other pointer
    int **p_p_x =  &p_x;
    cout << "Add p_x : " << &p_x << endl;
    cout << "Value p_p_x : " << p_p_x << endl;
    cout << "Value *p_p_x : " << *p_p_x << endl;
    cout << "Value **p_p_x : " << **p_p_x << endl;


}