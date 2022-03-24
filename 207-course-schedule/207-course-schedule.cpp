class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>>course(n);
        vector<int>indegree(n,0);
        for(auto kl:p){
            course[kl[1]].push_back(kl[0]);
            indegree[kl[0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        int cnt =0;
        while(!q.empty()){
            int curr =q.front();
            q.pop();
            cnt++;
            for(auto v:course[curr]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return cnt ==n;
    }
};