

#include<bits/stdc++.h>
using namespace std;



// Given a string s, return true if the s can be palindrome after deleting at most one character from it.



bool pal(int ind,string str){
        string st ;
        string st1;
        for(int i=0;i<str.length();i++){
            if(i!=ind){
                st1+=str[i];
            }
        }
        st = st1;
        reverse(st.begin(),st.end());
        return (st==st1);
    }
    bool validPalindrome(string s) {
        int m = 0;
        int n = s.length()-1;
        while(m<n){
            if(s[m]!=s[n]){
            if(pal(m,s)==true) return true;
            if(pal(n,s)==true) return true;
            return false;
        }
            m++;n--;
        }
        return true;;
    }