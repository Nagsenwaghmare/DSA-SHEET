#include <bits/stdc++.h>
using namespace std;


vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int k = p.size();
        if(k>n)return {};
        int i=0;
        int j=0;
        vector<int>res;
        vector<int>pm(26,0);
        vector<int>sm(26,0);
        for(auto i:p){
            pm[i-'a']++;
        }
        string str="";
        while(j<n){
            sm[s[j]-'a']++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(sm==pm){
                    res.push_back(i);
                }
                sm[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return res;
    }
