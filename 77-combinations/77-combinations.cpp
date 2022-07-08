class Solution {
public:
    vector<vector<int>>res;
    vector<int>temp;
    int r;
    void backtrack(vector<int>&nums,int idx){
        if(temp.size()==r){
            res.push_back(temp);return;
        }
        for(int i=idx;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(nums,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        r =k;
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        backtrack(nums,0);
        return res;
    }
};