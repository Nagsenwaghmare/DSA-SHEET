class Solution {
public:
    bool dfs(vector<vector<int>>&adj,vector<int>&vis,int curr,int parent=-1){
        if(vis[curr])return true;
        vis[curr]=true;
        for(auto i:adj[curr]){
            if(i!=parent && dfs(adj,vis,i,curr))return true;
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>>adj(n+1);
        vector<int>vis(n+1);
        for(auto i:edges){
            fill(begin(vis),end(vis),false);
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            if(dfs(adj,vis,i[0]))return i;
        }
        return {};
    }
};