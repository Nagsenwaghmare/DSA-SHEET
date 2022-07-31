class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>>course(n);
        vector<int>indegree(n,0);
        for(auto i:p){
            course[i[0]].push_back(i[1]);
            // indegree[i[0]]++;
            indegree[i[1]]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0)q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto i:course[curr]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            cnt++;
        }
        return cnt==n;
    }
};