
// https://leetcode.com/problems/length-of-last-word/




#include <bits/stdc++.h>
using namespace std;



int lengthOfLastWord(string s) {
        int n = s.length();
        stack<string>st;
        int i=0;
        while(i<n){
            if(s[i]!=' '){
                string temp = "";
                while(s[i]!=' ' && i<n){
                    temp+=s[i];
                    i++;
                }
                st.push(temp);
            }
            i++;
        }
        string str = st.top();
        return str.length();
        
    }