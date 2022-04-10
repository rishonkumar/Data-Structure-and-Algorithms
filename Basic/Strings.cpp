#include<bits/stdc++.h>
using namespace std;

int main() {

    char a = 'c';
    char b = 'q';
    cout << (int) a;

    cout << b - a << endl;

    //Strings
    string str = "Hello";
    cout << str << endl;
    
    string str2;
    cin >> str2;

    cout << str2 << endl;


    // Getline
    string s1;
    getline(cin,s1);
    cout << s1 << endl;

    //dealing big numbers
    string no; ///123456778997543432
    cin >> no;

    int lastDigit =  no[no.size() - 1] - '0'; // 2 in integer
}