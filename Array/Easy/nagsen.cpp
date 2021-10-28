#include <bits/stdc++.h>
using namespace std;

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.


vector<int> runningSum(vector<int>& a) {
        int n = a.size();
        vector<int>run_sum;
        int sum = a[0];
        run_sum.push_back((sum));
        for(int i=1;i<n;i++){
            sum+=a[i];
            run_sum.push_back((sum));
            
        }
        return run_sum;
    }