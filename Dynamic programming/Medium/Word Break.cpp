#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool prefix(string s, string p){
        if(p.length() > s.length()) return false;
        for(int i = 0; i < p.size(); i++){
            if(s[i] != p[i]) return false;
        }
        return true;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
    /*
        for i : wd { 
            if(prefix(s,i)  == true) {
                if(wordBreak(s.substr(i.length, s.len - i.len), wd) == true) return true;
            }
        }    
        return false;   
    */
        bool dp[s.length()+1];
        // if(s.length() == 0) return true;
        dp[0] = true;
        
//         "ab", "cd"
//        "abcd"        
//         dp[i] -> suffix of s of length = i
//         dp[0] = ""
//         dp[1] = "d"
//         dp[2] = "cd"    
                   
        for(int j = 1; j <= s.length(); j++){
            int i;
            for(i = 0; i < wordDict.size(); i++){
                string curr_word = wordDict[i];
                if(prefix(s.substr(s.length() - j, j), curr_word)){
                    if(dp[j - curr_word.length()]) {
                        dp[j] = true;
                        break;
                    }
                }
            }
            if(i == wordDict.size()) dp[j] = false;
        }
        return dp[s.length()];
    }
};