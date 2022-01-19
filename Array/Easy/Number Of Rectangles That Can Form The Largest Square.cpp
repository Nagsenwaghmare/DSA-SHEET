#include <bits/stdc++.h>
using namespace std;


int countGoodRectangles(vector<vector<int>>& rect) {
        vector<int>pq;
        for(int i=0;i<rect.size();i++){
            for(int j=0;j<1;j++){
                pq.push_back(min(rect[i][j],rect[i][j+1]));
            }
        }
        int cnt=1;
        sort(pq.begin(),pq.end(),greater<int>());
        for(auto i:pq){
            cout<<i<<" ";
        }
        for(int i=0;i<pq.size()-1;i++){
            if(pq[i]==pq[i+1]){
                cnt++;
            }else{
                break;
            } 
        }
        return cnt;
    }