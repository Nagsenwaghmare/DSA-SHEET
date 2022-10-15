class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix((nums)),suffix((nums)),ans(size(nums));
        partial_sum(begin(prefix),end(prefix),begin(prefix),multiplies<int>());
        partial_sum(rbegin(suffix),rend(suffix),rbegin(suffix),multiplies<int>());
        for(int i=0;i<size(nums);i++){
            ans[i]= (i!=0?prefix[i-1]:1)*(i!=size(nums)-1?suffix[i+1]:1);
        }
        return ans;
    }
};