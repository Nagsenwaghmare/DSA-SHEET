#include <bits/stdc++.h>
using namespace std;



vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        int  n = nums.size();
        int no = pow(2,n);
        for(int i=0;i<no;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    temp.push_back(nums[j]);
                }
            }
            v.push_back(temp);
        }
        return v;
    }

//     Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.