#include <bits/stdc++.h>
using namespace std;

int numOfPairs(vector<string>& nums, string target) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    cnt++;
                }if(nums[j]+nums[i]==target){
                    cnt++;
                }
            }
        }
        return cnt;
    }