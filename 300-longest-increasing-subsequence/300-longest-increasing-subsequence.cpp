class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len =0;
        for(auto curr:nums){
            if(len==0 || nums[len-1]<curr)nums[len++]=curr;
            else *lower_bound(begin(nums),begin(nums)+len,curr)=curr;
        }
        return len;
    }
};