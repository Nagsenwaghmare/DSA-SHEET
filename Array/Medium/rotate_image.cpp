#include<bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int>>& a) {
        int n = a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
    }








//     You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 