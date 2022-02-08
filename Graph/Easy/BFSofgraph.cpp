#include <bits/stdc++.h>
using namespace std;

// below is the code for connected graph if we want for disconnected we  can run a loop for each of the node 
// and have to check whether it is visited or not 
// Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        vector<int>vis(v+1,0);
                queue<int>q;
                q.push(0);
                vis[0] = 1;
                while(!q.empty()){
                    int curr = q.front();
                    q.pop();
                    bfs.push_back(curr);
                    for(auto it:adj[curr]){
                        if(!vis[it]){
                            q.push(it);
                            vis[it] = 1;
                        }
                    }
                }
                return bfs;
    }