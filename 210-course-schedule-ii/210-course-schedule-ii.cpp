class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>>course(n);
        vector<int>result;
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
            result.push_back(curr);
            q.pop();
            cnt++;
            for(auto v:course[curr]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        if(cnt==n){
            return result;
        }else{
            result.clear();
        }
        return result;
    }
};