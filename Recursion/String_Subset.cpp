#include<iostream>
using namespace std;

void printSubset(string str , int idx , string ans) {

    if(idx == str.size()){
        cout << ans << endl;
        return;
    }


    //pick the current character
    printSubset(str, idx+1 , ans + str[idx]);
    //not pick the current character
    printSubset(str, idx+1 , ans);
}

int main() {

    string s = "abc";

    printSubset(s,0,"");
}