class Solution {
public:
    vector<vector<int>>res;
    vector<int>curr;
    void backtrack(vector<int>& nums,int idx){
        res.push_back(curr);
        for(int i=idx;i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(nums,i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return res;
    }
};