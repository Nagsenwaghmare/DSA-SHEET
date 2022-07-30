class Solution {
public:
    int dijkstra(vector<pair<int,int>>adj[],int n,int source){
        vector<int>timetaken(n,INT_MAX);
        vector<bool>visited(n,false);
        timetaken[source] = 0;
        for(int i=0;i<n;i++){
            int src =-1;
            int mini = INT_MAX;
            for(int j=0;j<n;j++){
                if(visited[j]==false && timetaken[j]<mini ){
                    mini = timetaken[j];
                    src = j;
                    
                }
            }
            if(src==-1)return -1;
            visited[src] = true;
            for(auto child:adj[src]){
                if(visited[child.first] ==false && timetaken[child.first]>timetaken[src]+child.second){
                    timetaken[child.first]=timetaken[src]+child.second;
                }
            }
        }
        int maxi = INT_MIN;
        for(auto k:timetaken){
            maxi = max(maxi,k);
        }
        return maxi;
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int len = times.size();
        vector<pair<int,int>>adj[n];
        for(int i=0;i<len;i++){
            adj[times[i][0]-1].push_back(make_pair(times[i][1]-1,times[i][2]));
        }
        return dijkstra(adj,n,k-1);
    }
};