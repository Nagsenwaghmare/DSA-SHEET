class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = INT_MIN; 
        
        for(int i = 0; i < edges.size(); i++) { 
            n = max(edges[i][0], n); 
            n = max(n, edges[i][1]);
        }  
        
        vector<int> degree(n, 0); 
        for(int i=0;i<edges.size();i++){
            degree[edges[i][0]-1]++;
            degree[edges[i][1]-1]++;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==n-1){
                return i+1;
            }
        }
        return -1;
    }
};