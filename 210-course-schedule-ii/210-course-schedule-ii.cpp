class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int>res;
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for(auto i:p){
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
                res.push_back(i);
            }
        }
        int cnt=0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            for(auto i:adj[curr]){
                indegree[i]--;
                if(indegree[i]==0){
                    res.push_back(i);
                    q.push(i);
                }
            }
            cnt++;
        }
        // for(auto i:res){
        //     cout<<i<<" ";
        // }
        vector<int>temp;
        return cnt==n?res:temp;
    }
};