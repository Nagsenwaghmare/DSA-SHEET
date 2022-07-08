class Solution {
public:
    vector<vector<int>>res;
    vector<int>temp;
    set<int>s;
    void backtrack(vector<int>& nums){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                temp.push_back(nums[i]);
                s.insert(nums[i]);
                backtrack(nums);
                temp.pop_back();
                s.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums);
        return res;
    }
};