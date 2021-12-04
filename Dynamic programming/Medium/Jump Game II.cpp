#include<bits/stdc++.h>
using namespace std;


int jump(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        dp[0] = 0;
        for(int i=1;i<n;i++){
            dp[i] = INT_MAX;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(j+nums[j]>=i){
                    if(dp[j]!=INT_MAX){
                        dp[i] = min(dp[i],dp[j]+1);
                    }
                }
            }
        }
        return dp[n-1];
    }