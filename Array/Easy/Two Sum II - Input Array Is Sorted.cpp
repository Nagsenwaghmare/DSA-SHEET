#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++){
            if(mp.find(target-a[i])!=mp.end()){
                return {mp[target-a[i]],i+1};
            }
            mp[a[i]] = i+1;
        }
        return {-1,-1};
    }