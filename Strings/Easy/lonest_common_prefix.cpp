// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".


#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& str) {
        string s = "";
      
        int index = 0;
        if( str.size()==0) return s;
        for(auto ch:str[0]){
            for(int i=1;i<str.size();i++){
                if(index>=str[i].size() || ch!=str[i].at(index)){
                    return s;
                }
            }
            s+=ch;
            index++;
        }
        return s;
    }