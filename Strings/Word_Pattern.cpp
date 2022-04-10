//https://leetcode.com/problems/word-pattern/
#include<bits/stdc++.h>
using namespace std;

    bool wordPattern(string pattern, string s) {
        vector<string>v;
        int i = 0;
        string temp = "";
        while (i < s.size())
        {
            if(s[i] == ' '){
                v.push_back(temp);
                temp = "";
            }
            else {
                temp += s[i];
            }
            i++;
        }
        v.push_back(temp);

        if(v.size() != pattern.size()) return false;

        unordered_map<char,string>map;
        set<string>st;

        for(int i = 0 ; i < pattern.size() ; i++) {
            //pattern in hashmap
            if(map.find(pattern[i]) != map.end()) {
                if(map[pattern[i]] != v[i])
                    return false;
            }
            // add in hashmap
            else {
                //edge case
                
                //"abba" "dog dog dog dog"
                if(st.count(v[i]) > 0) return false;

                map[pattern[i]] = v[i];
                st.insert(v[i]);
            }
        }
        return true;
        
    }
 
