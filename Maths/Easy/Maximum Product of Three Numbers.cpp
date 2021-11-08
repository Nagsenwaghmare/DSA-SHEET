// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.


#include <bits/stdc++.h>
using namespace std;



int maximumProduct(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        return max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
    }