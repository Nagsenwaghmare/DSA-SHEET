    #include<bits/stdc++.h>
    using namespace std;




// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.



    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> v(n,1);
       for(int i=1;i<n;i++){
           v[i] = v[i-1]*a[i-1];
       }
        int multiplier = a.back();
        for(int j=n-2;j>=0;j--){
            v[j] = v[j]*multiplier;
            multiplier*=a[j];
        }
        return v;
    }
