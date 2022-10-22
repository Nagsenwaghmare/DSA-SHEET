class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        std::sort(begin(nums),end(nums));
        int n = nums.size();
        for(int i=0;i<n;i++){
            int l= i+1;
            int r = n-1;
            int target  = -nums[i];
            while(l<r){
                int sum = nums[l]+nums[r];
                if(sum==target){
                    vector<int>temp;
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    temp.push_back(nums[i]);
                    res.push_back(temp);
                    while(l<r && nums[l]==temp[0])l++;
                    while(l<r && nums[r]==temp[1])r--;
                }if(sum>target){
                    r--;
                }else if(sum<target){
                    l++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return res;
    }
};