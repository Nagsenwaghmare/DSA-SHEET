#include <bits/stdc++.h>
using namespace std;


int coinChange(vector<int>& coins, int val) {
       int n = coins.size();
        int dp[val+1];
        dp[0]=0;
        for(int i=1;i<=val;i++){
            dp[i] = val+1;
        }
        for(int i=1;i<=val;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    int sub_res = dp[i-coins[j]];
                    if(sub_res!=-1){
                        dp[i] = min(dp[i],sub_res+1);
                    }
                }
            }
        }
        return dp[val]>val?-1:dp[val];
    }