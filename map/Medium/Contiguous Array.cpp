#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int presum=0;
        int maxlen =0;
        int n = nums.size();
        mp[0] = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                presum+=1;
            }else{
                presum+=-1;
            }
            if(mp.find(presum)!=mp.end()){
                maxlen = max(maxlen,i-mp[presum]);
            }
            else{
                mp[presum]=i;
            }
        }
        return maxlen;
    }