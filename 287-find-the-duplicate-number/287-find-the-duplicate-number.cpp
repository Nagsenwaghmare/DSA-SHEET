class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second>=2)return it.first;
        }
        return -1;
    }
};