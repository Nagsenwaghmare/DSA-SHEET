
#include<bits/stdc++.h>
using namespace std;

// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.



int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        int cnt = 0;
        int pre_sum = 0;
        unordered_map<int,int>mp;
        mp[pre_sum]++;
        
        for(int i=0;i<n;i++){
            pre_sum=(pre_sum+a[i])%k;
            if(pre_sum<0)pre_sum+=k;
            if(mp.find(pre_sum)!=mp.end()){
                cnt+=mp[pre_sum];
            }
            mp[pre_sum]++;
        }
        return cnt;
    }