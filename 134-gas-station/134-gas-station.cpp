class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int sum = 0;
        int maxi=INT_MIN;
        int idx =0;
        for(int i=n-1;i>=0;i--){
            sum+=gas[i]-cost[i];
            if(sum>maxi){
                maxi = sum;
                idx = i;
            }
        }
        if(sum>=0) return idx;
        return -1;
    }
};