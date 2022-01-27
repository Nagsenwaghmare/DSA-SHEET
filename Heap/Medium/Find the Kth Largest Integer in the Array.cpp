


#include <bits/stdc++.h>
using namespace std;



 static bool cmp(string &p1,string&p2){
        if(p1.length()==p2.length()){
            return p2>p1;
        }
        return p1.length()<p2.length();
        } 

    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        int n = nums.size();
        return nums[n-k];
    }