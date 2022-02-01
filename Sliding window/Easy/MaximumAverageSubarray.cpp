#include <bits/stdc++.h>
using namespace std;


double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n = nums.size();
        double  sum = 0;
        double avg = 0;
        double maxavg = INT_MIN;
        while(j<n){
            sum+=nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                avg = sum/k;
                maxavg = max(maxavg,avg);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return maxavg;
    }