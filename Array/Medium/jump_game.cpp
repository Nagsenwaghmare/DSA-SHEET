#include <bits/stdc++.h>
using namespace std;


//     You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.


bool canJump(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        int n=nums.size()-1;
        int reach=0;
        for(int i=0;i<nums.size();i++)
        {
            reach=max(reach,i+nums[i]);
            if(reach==i)
                return false;
                if(reach>=n)
                {
                    return true;
                }
        }
        return true;
    }







