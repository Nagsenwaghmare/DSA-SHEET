#include <bits/stdc++.h>
using namespace std;


vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>negative;
        vector<int>positive;
        vector<int>result;
        for(auto i:nums){
            if(i>0)positive.push_back(i);
            else negative.push_back(i);
        }
        int n = nums.size();
        for(int i=0;i<n/2;i++){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        return result;
    }