class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        do{
            vector<int>temp;
            for(int i=0;i<nums.size();i++){
                temp.push_back(nums[i]);
            }
            res.push_back(temp);
        }while(next_permutation(nums.begin(),nums.end()));
        return res;
    }
};