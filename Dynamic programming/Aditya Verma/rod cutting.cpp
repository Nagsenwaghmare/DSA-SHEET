#include <bits/stdc++.h>
using namespace std;


int cutRod(int price[], int len) {
        //code here
        int n = len;
        vector<int>length;
        for(int i=1;i<=n;i++){
            length.push_back(i);
        }
        int dp[n+1][len+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<len+1;j++){
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<len+1;j++){
                if(length[i-1]<=j){
                    dp[i][j] = max(dp[i-1][j],(dp[i][j-length[i-1]]+price[i-1]));
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][len];
    }