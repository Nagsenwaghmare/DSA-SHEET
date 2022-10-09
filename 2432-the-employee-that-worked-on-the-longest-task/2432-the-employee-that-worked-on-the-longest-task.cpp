class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        unordered_map<int,int>mp;
        int starttime = 0;
        for(auto x: logs){
            if(mp.count(x[0])){
                mp[x[0]] = max(mp[x[0]], x[1]-starttime);
            }
            else{
                mp[x[0]] = x[1]-starttime;
            }
            
            starttime = x[1];
        }
        
        int ans, maxtime = INT_MIN;
        for(auto x: mp){
            if(x.second>maxtime){
                ans = x.first;
                maxtime = x.second;
            }
            
            else if(x.second==maxtime){
                ans = min(ans, x.first);
            }
        }
        
        return ans;
    }
};