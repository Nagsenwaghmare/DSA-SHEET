#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1001][1001];
    int lcs(string s1,string s2,int m,int n){
        if(m==0 || n==0)return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        if(s1[m-1]==s2[n-1]){
            return dp[m][n] = 1+lcs(s1,s2,m-1,n-1);
        }
        return dp[m][n] = max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    }
    int longestCommonSubsequence(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        memset(dp,-1,sizeof(dp));
        return lcs(s1,s2,m,n);
    }
};
