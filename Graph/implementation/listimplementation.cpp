// in this implementation we generally use the array of vectors
// if it is undirected graph we pushback them at the respective indices two times one directly and other reversely


#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    // n is no of nodes  hence there will be (n+1) vectors to store the connection between  any two nodes;
    // where m is the total no of paired edeges
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //lets suppose there will be weighted edges so they can be placed as pair of the edge between u and v of weight w 
    
}