class Solution {
public:
    int cnt=0;
    set<pair<int,int>>s;
    void dfs(vector<vector<int>>& adj,vector<bool>&vis,int curr){
        if(vis[curr])return;
        vis[curr]=true;
        for(auto i:adj[curr]){
            if(!vis[i]){
                if(s.find({curr,i})!=s.end())cnt++;
                dfs(adj,vis,i);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& c) {
        vector<vector<int>>adj(n);
        for(auto i:c){
            adj[i[0]].push_back(i[1]);
            s.insert({i[0],i[1]});
            adj[i[1]].push_back(i[0]);
        }
        vector<bool>vis(n,false);
        dfs(adj,vis,0);
        return cnt;
    }
};