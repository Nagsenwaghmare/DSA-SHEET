#include<bits/stdc++.h>
using namespace std;


vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int> res(k);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push(make_pair(it.second,it.first));
        }
        for(int i=0;i<k;i++){
            res[i]=pq.top().second;
            pq.pop();
        }
        return res;
    }