class Solution {
public:
//     in union find we connect component using  union by rank method 
//     where rank will be initialized with 0 initially
//     similarly for creating parent array we initialise parent array with with indices starting from 0 up to the size
    vector<int>parent,rank;
    int find(int x){
        if(x==parent[x])return x;
        return parent[x]=find(parent[x]);
    }
    void union_op(int a,int b){
        int x = find(a);
        int y = find(b);
        if(rank[x]>rank[y])parent[y] = x;
        else if(rank[y]>rank[x])parent[x] = y;
        else{
            parent[x] = y;
            rank[y]++;
        }
    }
    bool equationsPossible(vector<string>& e) {
        parent.resize(26);
        rank.resize(26,0);
        for(int i=0;i<26;i++)parent[i]=i;
        for(int i=0;i<e.size();i++){
            if(e[i][1]=='='){
            int x = e[i][0]-'a';
            int y = e[i][3]-'a';
            union_op(x,y);
            }
        }
        for(int i=0;i<e.size();i++){
            int x = e[i][0]-'a';
            int y = e[i][3]-'a';
            if(e[i][1]=='!'){
                if(find(x)==find(y))return false;
            }
        }
        return true;
    }
};