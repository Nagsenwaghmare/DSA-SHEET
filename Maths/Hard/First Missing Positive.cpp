// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.



#include <bits/stdc++.h>
using namespace std;



int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int i;
        for(i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return i;
    }
