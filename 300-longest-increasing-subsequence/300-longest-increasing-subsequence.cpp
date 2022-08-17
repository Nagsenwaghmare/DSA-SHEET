class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans=1;
        int n = nums.size();
        // dp[i] represent LIS ending at index i
//         hence we check whether there is any index smaller than i that is we check for j
//         and we extend the LIS at j by 1
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],dp[j]+1);
                    ans = max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};