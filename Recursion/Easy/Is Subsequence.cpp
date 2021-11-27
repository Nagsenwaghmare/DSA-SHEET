#include <bits/stdc++.h>
using namespace std;

bool subseq(string s,string t,int i,int j){
        if(i==0)return true;
        if(j==0) return false;
        if(s[i-1]==t[j-1]){
            return subseq(s,t,i-1,j-1);
        }
            return subseq(s,t,i,j-1);
    }
    
    
    bool isSubsequence(string s, string t) {
        int i = s.length();
        int j = t.length();
        return subseq(s,t,i,j);
    }