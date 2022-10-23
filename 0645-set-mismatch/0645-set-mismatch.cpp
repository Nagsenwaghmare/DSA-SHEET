class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int sum1 =0;
        for(auto i:nums)sum+=i;
        for(int i=1;i<=nums.size();i++)sum1+=i;
        sort(nums.begin(),nums.end());
        int duplicate = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                duplicate = nums[i];
                break;
            }
        }
        return {duplicate,(sum1-sum+duplicate)};
    }
};