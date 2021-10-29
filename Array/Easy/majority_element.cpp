#include <bits/stdc++.h>
using namespace std;

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



int majorityElement(vector<int>& nums) {
        unordered_map<int ,int>m;
        int n = nums.size();
        int major = 0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>(n/2)){
                major =  nums[i];
            }
        }
        return major;
    }