class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int>s;
        vector<int>res;
        for(auto i:nums){
            s.insert(i);
        }
        for(auto i:s){
            res.push_back(i);
        }
        int n = res.size();
        int m = nums.size();
        int dp[n+1][m+1];
        
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(res[i-1]==nums[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};