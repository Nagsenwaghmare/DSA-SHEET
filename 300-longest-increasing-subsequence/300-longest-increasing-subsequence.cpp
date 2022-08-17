class Solution {
public:
    int lis(vector<int>& nums,int idx,int prev,int n,vector<vector<int>>&dp){
        if(idx==n)return 0;
        if(dp[idx][prev+1]!=-1)return dp[idx][prev+1]; 
        int len = lis(nums,idx+1,prev,n,dp);
        if(prev==-1 || nums[idx]>nums[prev]){
            len = max(len,1+lis(nums,idx+1,idx,n,dp));
        }
        return dp[idx][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return lis(nums,0,-1,n,dp);
    }
};