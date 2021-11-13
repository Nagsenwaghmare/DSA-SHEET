
#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string str ) {
        int left = 0;
        int n = str.length();
        int longlen = 0;
        map<char,int>mp;
        for(int right =0;right<n;right++){
            if(mp.find(str[right])!=mp.end()){
                left = max(left,mp[str[right]]+1);
            }
            mp[str[right]] = right;
            longlen = max(longlen,right-left+1);
        }
        return longlen;
    }


    // Given a string s, find the length of the longest substring without repeating characters.