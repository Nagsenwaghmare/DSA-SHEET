#include <bits/stdc++.h>
using namespace std;


// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.


vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]*nums[i]);
        }
        sort(v.begin(),v.end());
        return v;
    }