
#include <bits/stdc++.h>
using namespace std;

int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>m;
        int a=0;
        for(auto x:time){
            a+=m[(600-x)%60];
            m[x%60]++;
        }
        return a;
    }