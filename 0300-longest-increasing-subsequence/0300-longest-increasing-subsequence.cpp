class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            auto it = lower_bound(begin(res),end(res),nums[i]);
            if(it==res.end())res.push_back(nums[i]);
            else *it = nums[i];
        }
        return res.size();
    }
};