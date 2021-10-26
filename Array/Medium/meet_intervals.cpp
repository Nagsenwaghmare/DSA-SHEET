#include<bits/stdc++.h>
using namespace std;

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.



vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector< vector<int>>v;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        if(n==1){
            v.push_back({start,end});
            return v;
        }
        for(int i=0;i<n-1;i++){
            if(start>=intervals[i+1][0] || end>=intervals[i+1][0]){
                start = min(start,intervals[i+1][0]);
                end = max(end,intervals[i+1][1]);
            }else{
                v.push_back({start,end});
                start = intervals[i+1][0];
                end = intervals[i+1][1];
            }
            if(i==n-2){
                v.push_back({start,end});
            }
        }
        return v;
    }