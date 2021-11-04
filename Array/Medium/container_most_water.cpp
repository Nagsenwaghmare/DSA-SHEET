#include<bits/stdc++.h>
using namespace std;


// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

// Notice that you may not slant the container.



int maxArea(vector<int>& a) {
        int n = a.size();
        int left = 0;
        int right = n-1;
        int ans =0;
        while(left<right){
            if(a[left]<a[right]){
                ans = max(ans,(right-left)*min(a[left],a[right]));
                left++;
            }else if(a[left]>a[right]){
                ans = max(ans,(right-left)*min(a[left],a[right]));
                right--;
            }
            else if(a[left]==a[right]){
                ans = max(ans,(right-left)*a[left]);
                left++;
                right--;
            }
        }
        return ans;
    }