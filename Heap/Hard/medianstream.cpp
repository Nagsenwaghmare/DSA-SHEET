#include <bits/stdc++.h>
using namespace std;


vector<int>medianstream(vector<int>&a){
    vector<int>res;
    priority_queue<int>s;//max_heap where we will be storing the min elements
    priority_queue<int,vector<int>,greater<int>>g;// min_heap where we will be storing max elements
    s.push(a[0]);
    res.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        int x = a[i];
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            res.push_back((s.top()+g.top())/2.0);
        }else{
            if(x<=s.top()){
                s.push(x);
            }else{
                g.push(x);
                s.push(g.top());
                g.pop();

            }
            res.push_back(s.top());
        }
    }
    return res;
}
int main(){
    vector<int>k = {25,7,10,15,20};
     k = medianstream(k);
    for(auto i:k){
        cout<<i<<" ";
    }

}
