
#include<bits/stdc++.h>
using namespace std;


// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.


string convertToTitle(int n) {
       string s = "";
        n--;
        while(n>=0){
            s+=(n%26+'A');
            n/=26;
            n--;
        }
        reverse(s.begin(),s.end());
        return s;
        
    }