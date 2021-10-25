#include <bits/stdc++.h>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order


vector<int> twoSum(vector<int>& a, int k) {
        int n = a.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(k-a[i])!=m.end()){
                return {i,m[k-a[i]]};
            }else{
                m[a[i]] = i;
            }
        }
        return {-1,-1};
    }
