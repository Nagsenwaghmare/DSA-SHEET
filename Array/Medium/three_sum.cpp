// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> v;
        int n = a.size();
        if(n<3) return {};
        for(int i=0;i<n-2;i++){
            int low = i+1;
            int high = n-1;
            if(i==0 ||(i>0 && a[i]!=a[i-1])){
                while(low<high){
                    if((a[low]+a[high]+a[i])==0){
                        v.push_back({a[low],a[high],a[i]});
                        while(low<high && a[low]==a[low+1])low++;
                        while(low<high && a[high]==a[high-1]) high--;
                        low++;
                        high--;
                    }
                    else if((a[low]+a[high]+a[i])>0)high--;
                    else low++;
                }
            }
        }
        return v;
    } 


