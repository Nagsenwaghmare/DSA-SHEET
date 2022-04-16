class Solution {
public:
    int findTargetSumWays(vector<int>& a, int k) {
        int sum = 0;
        int n = a.size();
        sum = accumulate(a.begin(),a.end(),sum);
        if(sum<abs(k) ||(sum+k)%2!=0){
            return 0;
        }
        int res = (sum+k)/2;
        int dp[n+1][res+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<res+1;j++){
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<res+1;j++){
                if(a[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j-a[i-1]])+(dp[i-1][j]));
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][res];
    }
};