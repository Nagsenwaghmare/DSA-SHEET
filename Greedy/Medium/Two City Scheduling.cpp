#include <bits/stdc++.h>
using namespace std;

static bool cmp(vector<int>&p1,vector<int>&p2){
        return p1[0]-p1[1]<p2[0]-p2[1];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),cmp);
        int res = 0;
        for(int i=0;i<costs.size()/2;i++){
            res+=costs[i][0]+costs[i+costs.size()/2][1];
        }
        return res;
    }