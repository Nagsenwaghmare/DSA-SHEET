class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>res;
        map<int,vector<int>>mp;
        for(int i=0;i<g.size();i++){
            mp[g[i]].push_back(i);
        }
        for(auto i:mp){
            int n = i.first;
            int k=0;
            vector<int>result=i.second;
            while(k<result.size()){
                int j=0;
                vector<int>temp;
                while(j<n){
                    temp.push_back(result[j++]);
                }
                k+=j;
                res.push_back(temp);
            }
        }
        return res;
    }
};