#include <bits/stdc++.h>
using namespace std;
struct Triplet{
    int val,apos,vpos;
    Triplet(int v,int ap,int vp){
        val = v;
        apos = ap;
        vpos = vp;
    }
};
struct mycmp{
    bool operator()(Triplet &t1, Triplet&t2){
        return t1.val>t2.val;
    }
};

vector<int>mergekarray(vector<vector<int>>&a){
    vector<int>res;
    priority_queue<Triplet,vector<Triplet>,mycmp>pq;
    for(int i=0;i<a.size();i++){
        Triplet t(a[i][0],i,0);
        pq.push(t);
    }
    while(!pq.empty()){
        Triplet curr = pq.top();pq.pop();
        int ap = curr.apos ;int vp = curr.vpos;
        res.push_back(curr.val);
        if(vp+1<a[ap].size()){
            Triplet t(a[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }
    return res;
}

int main(){
    vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res=mergekarray(arr);  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}
