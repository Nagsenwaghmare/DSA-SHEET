#include <bits/stdc++.h>
using namespace std;

// implementation of graph using adjacency matrix 
// but we can use it for smaller number of nodes if the number of nodes become very large 
// we wont be able to implement the graph using adjacency matrix
int main(){
    int m,n;
    cin>>m>>n;
    int k = n+1;
    int a[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            a[i][j] = 0;
        }
        // cout<<"\n";
    }
    // cout<<"\n";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }


}
