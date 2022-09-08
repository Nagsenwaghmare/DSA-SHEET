class Solution {
public:
        
    int countPaths(int n, vector<vector<int>>& roads) {
        
        // Adjacency list of the undirected graph
        vector<vector<vector<int>>>adjL(n);
        
        // distance vector of nodes
        vector<long>dist(n,LONG_MAX);
        
        // populate Adjacency List {node, cost} pair
        for(int i=0;i<roads.size();i++)
        {
            adjL[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adjL[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        
        int MOD = 1000000007;
        
        // track the number of ways to reach node with min cost
        vector<long>ways(n,0);
        
        // source node has way 1 
        ways[0] = 1;
        
        // push source node with distance 0, PQ stores {cost, node} pair
        priority_queue<pair<long,int>,vector<pair<long,int>>,greater<>>pQ;
        pQ.push({0,0});
        dist[0] = 0;
        
        long cost;
        int node;        
        while(!pQ.empty())
        {
            cost = pQ.top().first;
            node = pQ.top().second;
            pQ.pop();
            
            // if cost is higher than current node distance then we ignroe furthur operations
            if(dist[node]<cost)continue;
            
            // loop through neighbors and relax the neighbor nodes
            for(auto &adj: adjL[node])
            {                
                // relax neighbor nodes and push in to PQ
                // neighbor node ways will be updated with current node ways as
                // we find a better cost for neighbor node
                if(dist[node]+adj[1] < dist[adj[0]])
                {
                    dist[adj[0]] = dist[node]+adj[1];
                    ways[adj[0]] = ways[node];
                    pQ.push({dist[adj[0]],adj[0]});
                }
                
                // if current node distance + edge cost = neighbor node cost then
                // this is another way to reach the neighbor node with min cost
                // so we update neighbor node ways as ways[neighbor] += ways[node]
                else if(dist[node]+adj[1] == dist[adj[0]])
                {
                    ways[adj[0]] = (ways[adj[0]] + ways[node])%MOD;
                }
            }
        }

        // return the number of ways to reach destination node
        return ways[n-1];
    }
};