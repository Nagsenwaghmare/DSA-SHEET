class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
//         dp[i] represents no of arithmatic slices ending at index i;
        int n = nums.size();
        if(n<3)return 0;
        vector<int>dp(n,0);
        int ans=0;
        if(nums[2]-nums[1]==nums[1]-nums[0])dp[2]=1;
        ans=dp[2];
        for(int i=3;i<n;i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2])dp[i]=dp[i-1]+1;
            ans+=dp[i];
        }
        return ans;
    }
};