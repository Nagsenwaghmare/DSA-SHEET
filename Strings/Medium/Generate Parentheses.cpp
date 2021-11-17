
// https://leetcode.com/problems/generate-parentheses/


#include <bits/stdc++.h>
using namespace std;

vector<string> res;
    void help(int open,int close,int n,string current){
        if(current.length()==2*n){
            res.push_back(current);
            return ;
        }
        if(open<n)help(open+1,close,n,current+"(");
        if(open>close)help(open,close+1,n,current+")");
    }
    vector<string> generateParenthesis(int n) {
       
       help(0,0,n,"");
        return res;
    }
