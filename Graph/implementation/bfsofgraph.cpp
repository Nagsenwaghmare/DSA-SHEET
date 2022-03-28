#include <bits/stdc++.h>
using namespace std;



vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                queue<int>q;
                q.push(i);
                vis[i] = true;
                while(!q.empty()){
                    int curr = q.front();
                    bfs.push_back(curr);
                    q.pop();
                    for(auto j:adj[curr]){
                        if(!vis[j]){
                            q.push(j);
                            vis[j] = true;
                        }
                    }
                }
            }
        }
        return bfs;
    }