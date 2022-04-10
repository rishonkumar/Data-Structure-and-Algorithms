#include<bits/stdc++.h>
using namespace std;

int main() {

    //creation
    unordered_map<string,int>memo;

    //insertion
    //1
    pair<string,int>p = make_pair("Rishon",31);

    memo.insert(p);

    //2
    pair<string,int>p2("Rishon1",31);

    memo.insert(p2);

    //3
    memo["xwz"] = 4;
    memo["xwz"] = 5; // it will be updated

    //Searching
    cout << memo["xwz"] << endl;

    cout << memo.at("Rishon") << endl;
   
    //to check presence
    cout << memo.count("Rishon") << endl;

    //earse
    memo.erase("Rishon");

    for(auto i : memo) {
        //first -> key second -> value
        cout << i.first << "" << i.second << endl;
    }

    //using iterator
    unordered_map<string,int> :: iterator it = memo.begin();

    while(it != memo.end()) {
        cout << it->first << "" << it->second << endl;
        it++;
    }

    return 0;
}