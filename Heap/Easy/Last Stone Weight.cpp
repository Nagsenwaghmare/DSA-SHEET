
#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>1){
            if(pq.size()==2){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            if(x==y){
                return 0;
            }else{
                return x-y;
            }
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            if(x==y){
                pq.pop();
            }
            if(x>y){
                pq.pop();
                pq.push(x-y);
            }
        }
        return pq.top();
    }