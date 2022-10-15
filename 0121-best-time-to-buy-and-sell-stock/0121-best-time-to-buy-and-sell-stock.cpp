class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxprofit=0;
        int mini = p[0];
        int n = p.size();
        for(int i=1;i<n;i++){
            mini = min(mini,p[i]);
            if(p[i]>mini)maxprofit = max(maxprofit,p[i]-mini);
        }
        return maxprofit;
    }
};