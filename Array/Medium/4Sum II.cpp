#include <bits/stdc++.h>
using namespace std;


int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        unordered_map<int,int>mp;
        for(auto i:a){
            for(auto j:b){
                mp[i+j]++;
            }
        }
        int res = 0;
        for(auto i:c){
            for(auto j:d){ 
                res+=mp[0-i-j];
            }
        }
        return res;
    }