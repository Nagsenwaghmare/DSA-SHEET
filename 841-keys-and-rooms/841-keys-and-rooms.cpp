class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int root,vector<bool>&visited){
        visited[root] = true;
        for(auto i:rooms[root]){
            if(!visited[i]){
                dfs(rooms,i,visited);
            }
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n,false);
        dfs(rooms,0,visited);
        for(auto i:visited){
            if(!i)return false;
        }
        return true;
    }
};