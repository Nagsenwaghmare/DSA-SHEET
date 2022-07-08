class Solution {
public:
    
    void backtrack(vector<int>& candidates, int target,int idx,vector<vector<int>>&res,
        vector<int>&temp){
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(candidates[i] > target) break;
            if((i>idx && candidates[i]==candidates[i-1]))continue;
            temp.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],i+1,res,temp);
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>temp;
        backtrack(candidates,target,0,res,temp);
        return res;
    }
};