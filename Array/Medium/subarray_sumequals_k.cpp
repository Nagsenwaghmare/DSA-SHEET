// Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.




#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)count++;
            if(umap.find(sum-k)!=umap.end()){
                count+=umap[sum-k];
            }
            umap[sum]++;
        }
        return count;
    }