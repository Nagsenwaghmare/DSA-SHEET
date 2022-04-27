class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<vector<pair<int,int>>>adj;
        for(int i=0;i<points.size();i++){
            vector<pair<int,int>>temp;
            for(int j=0;j<points.size();j++){
                if(j==i)continue;
                int dist  = abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                temp.push_back(make_pair(j,dist));
            }
            adj.push_back(temp);
        }
//         code for minimum spanning tree as we have now nodes with their cost;
        int n = points.size();
        vector<int>key(n,INT_MAX);
        vector<bool>mst(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        mst[0]=true;
        key[0]=0;
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            mst[u]=true;
            for(auto i:adj[u]){
                int v = i.first;
                int wt = i.second;
                if(mst[v]==false && wt<key[v]){
                    key[v]=wt;
                    pq.push({key[v],v});
                }
            }
        }
        int sum =0;
        for(auto i:key){
            sum+=i;
        }
        return sum;
    }
};