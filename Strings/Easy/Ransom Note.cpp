#include <bits/stdc++.h>
using namespace std;



bool canConstruct(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        unordered_map<char,int>sa;
        unordered_map<char,int>sb;
        for(int i=0;i<n;i++){
            sa[s1[i]]++;
        }
        for(int i=0;i<m;i++){
            sb[s2[i]]++;
        }
        int i;
        for(i=0;i<n;i++){
            if(sa[s1[i]]<=sb[s1[i]])continue;
            else break;
        }
        if(i==n) return true;
        else return false;
    }