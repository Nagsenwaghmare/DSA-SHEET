#include <bits/stdc++.h>
using namespace std;


int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        // length of shortest common supersequence can be found very easily if we can find lcs correctly
        // here we have to find longest common subsequence , and this string can be taken as common of both 
        //  and then we can reaarange the both the string in a single string according to the common string
        //  hence length will be m+n-length(lcs);
        
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0) dp[i][j] =0;
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return m+n-dp[m][n];
    }