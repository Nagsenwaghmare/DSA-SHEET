class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto i:arr){
            pq.push({abs(i-x),i});
        }
        vector<int>res;
        while(!pq.empty() && k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        sort(begin(res),end(res));
        return res;
    }
};