


#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int>& a, int k, int x) {
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<k;i++){
            pq.push({abs(a[i]-x),i});
        }
        for(int i=k;i<a.size();i++){
            int mindiff = abs(a[i]-x);
            if(pq.top().first>mindiff){
                pq.pop();
                pq.push({mindiff,i});
            }
        }
        while(!pq.empty()){
            res.push_back(a[pq.top().second]);
            pq.pop();
        }
        return res;
    }