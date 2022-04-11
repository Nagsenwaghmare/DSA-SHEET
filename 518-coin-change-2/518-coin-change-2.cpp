class Solution {
public:
    int change(int amount, vector<int>& coins) {
//         we have given infinite number of denominations of each coin
//         hence this problem comes under the unbounded knapsack
//         and then comes for choices here we have a choice whether to choose the coin or not
        int n = coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                if(i==0)dp[i][j] =0;
                if(j==0)dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][amount];
    }
};