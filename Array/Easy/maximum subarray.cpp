#include <bits/stdc++.h>
using namespace std;



int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum =nums[0];
        int lar_sum = nums[0];
        for(int i=1;i<nums.size();i++){
            sum = max(nums[i],nums[i]+sum);
            lar_sum = max(lar_sum,sum);
            
        }
        return lar_sum;
    }


// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.