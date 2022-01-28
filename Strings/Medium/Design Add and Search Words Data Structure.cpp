#include <bits/stdc++.h>
using namespace std;


    unordered_map<int,vector<string>>mp;
    void addWord(string word) {
        int n = word.size();
        mp[n].push_back(word);
    }
    bool issame(string s1,string s2){
        int l = s1.size();
        for(int i=0;i<l;i++){
            if(s2[i]=='.')continue;
            if(s1[i]!=s2[i])return false;
        }
        return true;
    }
    bool search(string word) {
        int k = word.size();
        for(auto i:mp[k]){
            if(issame(i,word)){
                return true;
            }
        }
        return false;
    }