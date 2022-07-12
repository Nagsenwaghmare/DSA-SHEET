class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                int j=i;
                while( j+1<nums.size() && nums[j]==nums[j+1]){
                    j++;
                }
                return {i,j};
            }
        }
        return {-1,-1};
    }
};