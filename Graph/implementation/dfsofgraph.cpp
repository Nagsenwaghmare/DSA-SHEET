#include <bits/stdc++.h>
using namespace std;

vector<int>dfs;
    void DFS(int n,vector<int> adj[],vector<bool>&vis){
        dfs.push_back(n);
        vis[n] = true;
        for(auto k:adj[n]){
            if(!vis[k]){
                DFS(k,adj,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {

        vector<bool>vis(V,false);
        DFS(0,adj,vis);
        return dfs;
    }