#include <bits/stdc++.h>
using namespace std;


vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto i:nums){
            mp[i]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)==mp.end() && mp.find(nums[i]+1)==mp.end() && mp[nums[i]]==1){
                res.push_back(nums[i]);
            }
        }
        return res;
    }  