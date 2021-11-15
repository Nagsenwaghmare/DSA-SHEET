#include<bits/stdc++.h>
using namespace std;



vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>>res;
        map<string,vector<string>>m;
        int n = s.size();
        for(int i=0;i<n;i++){
            string temp  = s[i];
            sort(s[i].begin(),s[i].end());
            m[s[i]].push_back(temp);
        }
        for(auto it = m.begin();it!=m.end();it++){
            res.push_back(it->second);
        }
        return res;
    }