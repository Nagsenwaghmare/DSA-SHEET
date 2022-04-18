class Solution {
public:
    int dp[51][51];
    int solve(vector<int>& a,int i,int j){
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mini = INT_MAX;
        for(int k=i;k<j;k++){
            int ans = solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
            mini = min(mini,ans);
        }
        return dp[i][j]=mini;
    }
    int minScoreTriangulation(vector<int>& a) {
        int n = a.size();
        memset(dp,-1,sizeof(dp));
        return solve(a,1,n-1);
    }
};