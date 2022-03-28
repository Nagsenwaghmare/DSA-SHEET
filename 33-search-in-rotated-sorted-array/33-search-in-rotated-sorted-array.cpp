class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        if(mp.find(target)==mp.end()){
            return -1;
        }
        return mp[target];
    }
};