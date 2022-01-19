#include <bits/stdc++.h>
using namespace std;

int findRadius(vector<int>& houses, vector<int>& heaters) {
        vector<int>res(houses.size(),INT_MAX);
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        for(int i=0,j=0;i<houses.size() && j<heaters.size();){
            if(heaters[j]>=houses[i]){
                res[i] = heaters[j]-houses[i];
                i++;
            }else{
                j++;
            }
        }
        for(int i=houses.size()-1,j=heaters.size()-1;i>=0 &&j>=0;){
            if(houses[i]>=heaters[j]){
                res[i] = min(res[i],houses[i]-heaters[j]);
                i--;
            }else{
                j--;
            }
        }
        return *max_element(res.begin(),res.end());
    }