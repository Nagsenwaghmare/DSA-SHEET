
#include <bits/stdc++.h>
using namespace std;


vector<int> getRow(int n) {
        vector<vector<int>> res;
        res.push_back(vector<int>(1,1));
        vector<int>num;
        for(int i=1;i<n+1;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=0;j<i-1;j++){
            temp.push_back(res[i-1][j]+res[i-1][j+1]);
        }
        temp.push_back(1);
        res.push_back(temp);
        }
        for(int i=0;i<n+1;i++){
            if(i==n){
                for(auto it:res[i]){
                num.push_back(it);
                }
            }
        }
        return num;
    }