#include <bits/stdc++.h>
using namespace std;

// here in this solution we have used the sliding window technique where 
// we were calculating for the longest substring with k unique charachters hence our main motive was to get the condition true
// so we used map to get the size of window where we have k unique characters as soon as we have got the window we were keeping 
// track of the max length when we were exceeding the size now we have to remove some characters  upto where we get size equal


int longestKSubstr(string s, int k) {
        int n = s.size();
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int maxlen = -1;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()<k){
                j++;
            }
            else if(mp.size()==k){
                maxlen = max(maxlen,j-i+1);
                j++;
            }else if(mp.size()>k){
                while(mp.size()>k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return maxlen;
    }