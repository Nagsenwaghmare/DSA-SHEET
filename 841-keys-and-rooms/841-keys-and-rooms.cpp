class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>visited(n,0);
        queue<int>q;
        q.push(0);
        visited[0] = 1;
        int count =0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto i:rooms[curr]){
                if(visited[i]==0){
                    q.push(i);
                    visited[i] = 1;
                }
            }
            count++;
        }
        return count==n;
    }
};