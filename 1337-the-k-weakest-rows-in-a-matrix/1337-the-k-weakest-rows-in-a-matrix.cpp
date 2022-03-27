class Solution {
public:
    int countsoldiers(vector<int>&temp){
        int cnt = 0;
        for(auto i:temp){
            if(i==1)cnt++;
        }
        return cnt;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>res;
        vector<int>result;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<mat.size();i++){
            pq.push({countsoldiers(mat[i]),i});
        }
        //sort(res.begin(),res.end());
        // while(!pq.empty()){
        //     cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        //     pq.pop();
        // }
        while(!pq.empty()){
            if(k-->0)result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};