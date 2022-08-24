class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        vector<int>prev(n,-1),ans;
        sort(begin(nums),end(nums));
        int idx =0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
                    dp[i] = dp[j]+1;
                    prev[i] = j;
                }
            }
            if(dp[idx]<dp[i]){
                idx = i;
            }
        }
        // cout<<idx;
        for(;idx>=0;idx=prev[idx]){
            cout<<idx<<" ";
            ans.push_back(nums[idx]);
        }
        return ans;
    }
};