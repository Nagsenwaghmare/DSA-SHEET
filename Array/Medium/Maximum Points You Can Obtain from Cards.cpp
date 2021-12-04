#include <bits/stdc++.h>
using namespace std;


int maxScore(vector<int>& a, int k) {
        int n = a.size();
        int currsubarrsum = 0;
        int totalsum = 0;
        int startindex = 0;
        int currsubarrlen=0;
        totalsum = accumulate(a.begin(),a.end(),totalsum);
        if(n==k) return totalsum;
        int minsubarrsum = totalsum;
        for(int i=0;i<n;i++){
            currsubarrsum+=a[i];
            currsubarrlen =i-startindex+1;
            if(currsubarrlen==n-k){
                minsubarrsum = min(currsubarrsum,minsubarrsum);
                currsubarrsum -= a[startindex++];
            }
        }
        return totalsum- minsubarrsum;
    }