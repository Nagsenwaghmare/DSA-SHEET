#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>v1,v2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto j:nums2){
            s2.insert(j);
        }
        for(auto z:s1){
            if(s2.find(z)!=s2.end()){
                v1.push_back(z);
            }
        }
        return v1;
    }