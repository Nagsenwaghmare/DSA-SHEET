#include <bits/stdc++.h>
using namespace std;

int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq,firstindex;
        int min_len = INT_MAX;
        int degree = 0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==1){
                firstindex[nums[i]] = i;
            }
            if(freq[nums[i]]==degree){
                int currlength = i-firstindex[nums[i]]+1;
                if(currlength<min_len){
                    min_len = currlength;
                }
            }
            if(freq[nums[i]]>degree){
                degree = freq[nums[i]];
                min_len = i-firstindex[nums[i]]+1;
            }
        }
        return min_len;
    }



//     Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.