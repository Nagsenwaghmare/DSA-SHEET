class Solution {
public:
    int n ;
    void dfs(vector<vector<int>>& graph,vector<int>&temp,vector<vector<int>>& paths,int idx){
        temp.push_back(idx);
        if(idx==n-1){
            paths.push_back(temp);
        }else{
            for(auto i:graph[idx]){
                dfs(graph,temp,paths,i);
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        vector<int>temp;
        vector<vector<int>>paths;
        dfs(graph,temp,paths,0);
        return paths;
    }
};