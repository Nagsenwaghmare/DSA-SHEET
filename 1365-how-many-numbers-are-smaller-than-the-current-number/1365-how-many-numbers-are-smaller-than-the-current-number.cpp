class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count[101] = {0};
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=1;i<101;i++){
            count[i]+=count[i-1];
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)res.push_back(0);
            else res.push_back(count[nums[i]-1]);
        }
        return res;
    }
};