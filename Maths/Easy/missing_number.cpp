

#include <bits/stdc++.h>
using namespace std;


// iven an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.





int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int s = 0;
        sum =accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<=n;i++){
            s+=i;
        }
        return abs(s-sum);
    }