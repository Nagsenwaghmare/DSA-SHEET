

#include <bits/stdc++.h>
using namespace std;





    stack<int> s1;
    stack <int> s2;
    
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || s2.top()>=val) s2.push(val);
    }
    
    void pop() {
        if(s1.top()==s2.top()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }