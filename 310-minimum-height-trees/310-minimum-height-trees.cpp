class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        vector<int>degrees(n);
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            degrees[edges[i][0]]++;
            degrees[edges[i][1]]++;
        }
        queue<int>q;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(degrees[i]==1){
                q.push(i);
            }
        }
        while(!q.empty()){
            int sz = q.size();
            res.clear();
            for(int i=0;i<sz;i++){
                int curr = q.front();
                q.pop();
                res.push_back(curr);
                for(auto i:adj[curr]){
                    degrees[i]--;
                    if(degrees[i]==1){
                        q.push(i);
                    }
                }
            }
        }
        return res;
    }
};