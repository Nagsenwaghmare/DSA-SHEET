class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<int>res;
        int n = nums.size();
        int sum=0;
        for(auto i:nums)i%2==0?sum+=i:sum+=0;
        if(nums.size()==1 && nums[0]==1 )return {0};
        for(auto i:q){
            if((nums[i[1]])%2==0){
                sum-=nums[i[1]];
            }
            nums[i[1]] +=i[0];
            if((nums[i[1]])%2==0)sum+=nums[i[1]];
            res.push_back(sum);
        }
        return res;
        
    }
};