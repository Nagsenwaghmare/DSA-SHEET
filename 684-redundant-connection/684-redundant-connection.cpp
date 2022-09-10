class DSU{
    vector<int>par,rank;
    public:
    DSU (int n) :par(n),rank(n){
        iota(begin(par),end(par),0);
    }
    int find(int x){
        if(x==par[x])return x;
        return par[x]=find(par[x]);
    }
    bool Union(int x,int y){
        int xp = find(x);
        int yp = find(y);
        if(xp==yp)return false;
        if(rank[xp]>rank[yp])par[yp]=xp;
        else if(rank[xp]<rank[yp])par[xp]=yp;
        else{
            par[xp]=yp;
            rank[yp]++;
        }
        return true;
    }
};


class Solution {
public:
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU ds(n+1);
        for(auto i:edges){
            if(!ds.Union(i[0],i[1]))return i;
        }
        return {};
    }
};