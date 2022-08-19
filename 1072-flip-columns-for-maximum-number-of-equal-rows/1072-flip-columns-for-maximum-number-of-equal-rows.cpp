class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int n= matrix.size();
        unordered_map<string,int>mp;
        for(auto  i:matrix){
            int  k = i[0];
            string s = "";
            for(auto j:i){
                if(j==k){
                    s+="1";
                }else{
                    s+="0";
                }
            }
            mp[s]++;
        }
        int maxi = INT_MIN;
        for(auto i:mp){
            maxi = max(maxi,i.second);
        }
        return maxi;
    }
};