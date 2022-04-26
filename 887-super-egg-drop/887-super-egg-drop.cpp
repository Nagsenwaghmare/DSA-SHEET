class Solution {
public:
    int solve(int k,int n,vector<vector<int>>&dp){
        if(k==1)return n;
        if(n==1 || n==0)return n;
        if(dp[k][n]!=-1)return dp[k][n];
        int mini = 1000000;
        int l =1;
        int h = n;
        while(l<=h){
            int  mid = l+(h-l)/2;
            int left = solve(k-1,mid-1,dp);
            int right = solve(k,n-mid,dp);
            int temp= 1+max(left,right);
            if(left<right){
                l = mid+1;
            }else{
                h = mid-1;
            }
            mini = min(mini,temp);
        }
        return dp[k][n] = mini;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return solve(k,n,dp);
    }
};