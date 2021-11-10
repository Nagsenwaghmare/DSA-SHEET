#include <bits/stdc++.h>
using namespace std;



vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int> s;
        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && (s.top()<nums2[i])){
                s.pop();
            }
            if(s.empty()){
                mp[nums2[i]] = -1;
            }else{
                mp[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(mp[nums1[i]]);
        }
        return res;
    }


//     The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.