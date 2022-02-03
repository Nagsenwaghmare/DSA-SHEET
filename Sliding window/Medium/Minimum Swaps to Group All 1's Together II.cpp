#include<bits/stdc++.h>
using  namespace std;

int minSwaps(vector<int>& nums) {
        int k = 0;
        for(auto i:nums){
            if(i==1){
                k++;
            }
        }
        if(k==0)return 0;
        nums.insert(nums.end(),nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        int j=0;
        int minswap = INT_MAX;
        int cnt = 0;
        while(j<n){
            if(nums[j]==0)cnt++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                minswap = min(minswap,cnt);
                if(nums[i]==0)cnt--;
                i++;j++;
            }
        }
        return minswap;
    }