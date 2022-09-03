class Solution {
public:
     /*  In bellman-ford algo calculates the shortest distance from the source
        point to all of the vertices.
        Time complexity of Bellman-Ford is O(VE),
    */
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        /* distance from source to all other nodes */
        vector<int> dist( n, INT_MAX );
        dist[src] = 0;
        
        // Run only K+1 times since we want shortest distance in K hops
        for( int i=0; i <= K; i++ ) {
            vector<int> tmp( dist );
            for( auto flight : flights ) {
                if( dist[ flight[0] ] != INT_MAX ) {
                    tmp[ flight[1] ] = min( tmp[flight[1]], dist[ flight[0] ] + flight[2] );
                }
            }
            dist = tmp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};