class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
            return mp.find(target)!=mp.end()?true:false;
    }
};