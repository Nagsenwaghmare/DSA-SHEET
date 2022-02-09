#include <bits/stdc++.h>
using  namespace std;

bool iscycle(int v,int i,vector<int>&vis,vector<int>adj[]){
        queue<pair<int,int>>q;
        vis[i] = 1;
        q.push({i,-1});
        while(!q.empty()){
            int node  = q.front().first;
            int par = q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it,node});
                }else if(it!=par)return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V+1,0);
        for(int i=1;i<V;i++){
            if(!vis[i]){
                if(iscycle(V,i,vis,adj)) return true;
            }
        }
        return false;
    }