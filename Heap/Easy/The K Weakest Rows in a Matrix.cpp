#include <bits/stdc++.h>
using namespace std;

int countsoldiers(vector<int>&temp){
        int cnt = 0;
        for(auto i:temp){
            if(i==1)cnt++;
        }
        return cnt;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>res;
        vector<int>result;
        for(int i=0;i<mat.size();i++){
            res.push_back({countsoldiers(mat[i]),i});
        }
        sort(res.begin(),res.end());
        for(auto i:res){
            if(k-->0)result.push_back(i.second);
        }
        return result;
    }