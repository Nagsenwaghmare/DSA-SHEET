#include <bits/stdc++.h>
using namespace std;



bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int z=0;
        for(int i=1;i<=n;i++) z^=i;
        for (int i = 0; i < n; i++){
            int x=z,y=z;
            for (int j = 0; j < n; j++){
                x^=matrix[i][j];
                y^=matrix[j][i];
            }
            if(x!=0 || y!=0) return false;
        }
        return true;
    }