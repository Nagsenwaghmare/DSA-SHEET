class Solution {
public:
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        bool visited[n];
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        queue<int>q;
        q.push(source);
        visited[source]= true;
        while(!q.empty()){
            int curr = q.front();
            if(curr==destination)
                return true;
            q.pop();
            for(auto i:adj[curr]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        return false;
    }
};