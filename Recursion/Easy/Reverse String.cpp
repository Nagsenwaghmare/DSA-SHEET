//https://leetcode.com/problems/reverse-string/


#include <bits/stdc++.h>
using namespace std;


void reverseString(vector<char>& s) {
        string temp = "";
        for(int i=0;i<s.size();i++){
            temp+=s[i];
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<s.size();i++){
            s[i]=temp[i];
        }
    }


