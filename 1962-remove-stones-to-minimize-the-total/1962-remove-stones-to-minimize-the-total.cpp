class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto i:piles){
            pq.push(i);
        }
        while(!pq.empty() && (k--)>0){
            int curr  = pq.top();
            curr = curr-floor(curr/2);
            pq.pop();
            pq.push(curr);
            
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        };
        return sum;
    }
};