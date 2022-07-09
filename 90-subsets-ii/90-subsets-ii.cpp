class Solution {
public:
    vector<vector<int>>res;
    vector<int>curr;
    void backtrack(vector<int>& nums,int idx){
        res.push_back(curr);
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])continue;
            curr.push_back(nums[i]);
            backtrack(nums,i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backtrack(nums,0);
        return res;
    }
};