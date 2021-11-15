#include<bits/stdc++.h>
using namespace std;


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(--m[nums2[j]]>=0){
                res.push_back(nums2[j]);
            }
        }
        return res;
    }