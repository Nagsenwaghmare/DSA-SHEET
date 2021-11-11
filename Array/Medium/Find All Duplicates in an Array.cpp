#include<bits/stdc++.h>
using namespace std;




// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.



vector<int> findDuplicates(vector<int>& nums) {
        int n  = nums.size();
        vector<int> v;
        if(n==1) return v ;
        
        unordered_map<int,int> m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto y:m){
            if(y.second>1){
                v.push_back(y.first);
            }
        }
        return v;
    }