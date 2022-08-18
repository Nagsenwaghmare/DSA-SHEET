class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int,int>mp;
        priority_queue<int>pq;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push(i.second);
        }
        int cnt=0;
        int ans=0;
        while(!pq.empty() && cnt<(n/2)){
            cnt+=pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};