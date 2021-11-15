#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    if(n==0) return s;
        stack<string>st;
        for(int i=0;i<n;i++){
            if(s[i]==' ')continue;
                string temp;
                while(s[i]!=' ' && i<n){
                    temp+=s[i++];
                }
                st.push(temp);
        }
        string word = "";
        while(!st.empty()){
            word = word+st.top();
            st.pop();
            if(!st.empty())word+=" ";
        }
        return word;
    }