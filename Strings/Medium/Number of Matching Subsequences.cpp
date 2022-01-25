#include <bits/stdc++.h>
using namespace std;

int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        int cnt = 0;
        int m = s.length();
        for(auto k:mp){
            int i=0;
            int j=0;
            string str = k.first;
            int n = str.length();
            while(i<m && j<n){
                if(s[i]==str[j]){
                    i++;j++;
                }else{
                    i++; 
                }
            }
            if(j==n){
                cnt+=k.second;
            }
        }
        return cnt;
    }