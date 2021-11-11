
#include <bits/stdc++.h>
using namespace std;


int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        if(k>0){
            for(auto a:m){
                if(m.find(a.first+k)!=m.end()) cnt++;
            }
        }else{
            for(auto a:m){
                if(a.second>1){
                cnt++;
                }
            }
        }
        
        return cnt;
    }


// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

// 0 <= i < j < nums.length
// |nums[i] - nums[j]| == k
// Notice that |val| denotes the absolute value of val.