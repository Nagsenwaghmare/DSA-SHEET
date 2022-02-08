#include <bits/stdc++.h>
using namespace std;

void Dfs(int i,vector<int>&vis,vector<int>&dfs,vector<int> adj[]){
        int node  = i;
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs.push_back(it);
                Dfs(it,vis,dfs,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>vis(v+1,0);
        vector<int>dfs;
        dfs.push_back(0);
        Dfs(0,vis,dfs,adj);
        return dfs;
    }