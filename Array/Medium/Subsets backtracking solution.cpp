
#include <bits/stdc++.h>
using namespace std;

void help(int i,vector<int> &temp,vector<int>& nums,vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(temp);
        }else{
        temp.push_back(nums[i]);
        help(i+1,temp,nums,ans);
        temp.pop_back();
        help(i+1,temp,nums,ans);
        }
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        help(0,temp,nums,ans);
        return ans;
    }



    //     Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.