
#include <bits/stdc++.h>
using namespace std;
// // Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

                                //             1
                                //         1       1
                                //     1       2       1
                                // 1       3       3       1






vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
        v.push_back(vector<int>(1,1));
        for(int i=1;i<n;i++){
            vector<int > temp;
            temp.push_back(1);
            for(int j=0;j<i-1;j++){
                temp.push_back((v[i-1][j] + v[i-1][j+1]));
            }
            temp.push_back(1);
            v.push_back(temp);
        }
        return v;
    }