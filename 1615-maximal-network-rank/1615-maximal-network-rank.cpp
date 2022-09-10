class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>indegree(n);
        set<pair<int,int>>s;
        for(auto i:roads){
            indegree[i[0]]++;
            indegree[i[1]]++;
            s.insert({i[0],i[1]});
            s.insert({i[1],i[0]});
        }
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s.find({i,j})!=s.end()){
                    maxi = max(maxi,indegree[i]+indegree[j]-1);
                }else{
                    maxi = max(maxi,indegree[i]+indegree[j]);
                }
            }
        }
        return maxi;
    }
};