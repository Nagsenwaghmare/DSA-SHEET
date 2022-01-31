#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        int len = 0;
        int count0=0;
        while(j<n){
            if(nums[j]==1){
                len = max(len,j-i+1);
                j++;
                continue;
            }
            if(count0>=k){
                while(count0>=k){
                    if(nums[i]==1)
                        i++;
                    else{
                        count0--;
                        i++;
                    }
                }
                count0++;
                len = max(len,j-i+1);
                j++;
            }else{
                count0++;
                len = max(len,j-i+1);
                j++;
            }
        }
        return len;
    }