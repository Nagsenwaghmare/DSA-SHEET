#include<bits/stdc++.h>
using namespace std;



vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> v;
        int left = 0;
        int right = a[0].size()-1;
        int top = 0;
        int bottom = a.size()-1;
        int direction  = 0;
        while(left<=right && top<=bottom){
            if(direction ==0){
                for(int i=left;i<=right;i++){
                    v.push_back(a[top][i]);
                }
                top++;
            }
            else if(direction==1){
                for(int i=top;i<=bottom;i++){
                    v.push_back(a[i][right]);
                }
                right--;
            }
            else if(direction==2){
                for(int i=right;i>=left;i--){
                    v.push_back(a[bottom][i]);
                }
                bottom--;
            }else if(direction==3){
                for(int i=bottom;i>=top;i--){
                    v.push_back(a[i][left]);
                }
                left++;
            }
            direction = (direction+1)%4;
        }
        return v;
    }