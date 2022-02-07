#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t) {
        vector<int>v(26,0);
        for(int i=0;i<t.size();i++){
            v[t[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                int c = i+97;
                return char(c);
            }
        }
        return '0';
    }