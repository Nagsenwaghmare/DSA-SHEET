#include <bits/stdc++.h>
using namespace std;



vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>res;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            res.push_back({nums[i],i});
        }
        nth_element(begin(res),begin(res)+k,end(res),greater<pair<int,int>>());
        sort(begin(res),begin(res)+k,[](const auto &a,const auto &b){ return a.second<b.second;});
        for(int i=0;i<k;i++){
            result.push_back(res[i].first);
        }
        return result;
    }