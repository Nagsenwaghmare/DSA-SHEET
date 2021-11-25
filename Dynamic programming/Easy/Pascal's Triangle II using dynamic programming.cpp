#include <bits/stdc++.h>
using namespace std;


vector<int> getRow(int n) {
       vector<int> result;
        for(int i=0;i<=n;i++){
            result.push_back(1);
            int mid  = result.size()-2;
            for(int j=mid;j>0;j--){
                result[j] = result[j-1]+result[j];
            }
        }
        return result;
    }