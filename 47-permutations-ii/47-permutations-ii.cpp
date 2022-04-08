class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        do{ vector<int>temp;
            for(int i=0;i<nums.size();i++){
                temp.push_back(nums[i]);
            }
          if(s.find(temp)==s.end()){
               res.push_back(temp);
               s.insert(temp);
           }
        }while(next_permutation(nums.begin(),nums.end()));
        return res;
    }
};