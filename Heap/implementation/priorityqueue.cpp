#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(2);
    pq.push(34);
    pq.push(12);
    pq.push(45);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

// priority queue is implemented using the max heap which means maximum element will be at the top and other element will be in
// descendant order that is output of the above programme is  = 43 45 12 2;