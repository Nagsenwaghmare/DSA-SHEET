class Solution {
public:
    vector<vector<int>>dp;
    long long int help(vector<int>&coins,int n,int amount){
        if(amount==0)return 0;
        if(dp[n][amount]!=-1)return dp[n][amount];
        if(n==0)return INT_MAX;
        if(coins[n-1]>amount)
            return dp[n][amount] = help(coins,n-1,amount);
        return dp[n][amount] = min(1+help(coins,n,amount-coins[n-1]),help(coins,n-1,amount));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        dp.resize(13,vector<int>(100001,-1));
        int ans =  help(coins,n,amount);
        return ans==INT_MAX?-1:ans;
    }
};