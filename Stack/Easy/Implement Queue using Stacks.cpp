

#include <bits/stdc++.h>
using namespace std;


queue<int> q;
     
    
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int x=  q.front();
        q.pop();
        return x;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
       return q.empty(); 
    }