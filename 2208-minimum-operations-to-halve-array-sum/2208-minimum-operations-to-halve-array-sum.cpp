class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<long double>pq;
        long double sum = 0;
        for(auto i:nums){
            pq.push(i);
            sum+=i;
        }
        long double k = sum/2.0;
        int count = 0;
         long double currsum = sum;
        while(!pq.empty()){
            long double  x = pq.top()/2.0;
            currsum = currsum-pq.top();
            currsum+=(x);
            pq.pop();
            pq.push(x);
            count++;
            if(currsum<=k)break;
        }
        return count;
    }
};