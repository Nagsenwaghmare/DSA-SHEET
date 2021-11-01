#include<bits/stdc++.h>
using namespace std;


// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.


void nextPermutation(vector<int>& a) {
        int n = a.size();
        int i,j ;
        for(i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(a.begin(),a.end());
        }else{
            for( j=n-1;j>i;j--){
                if(a[j]>a[i]){
                    break;
                }
            }
            swap(a[i],a[j]);
            reverse(a.begin()+i+1,a.end());
        }
    }
