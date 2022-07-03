class Solution {
public:
    int dfs(int i,int j,int n,int m,vector<vector<int>>&dp,vector<vector<int>>& matrix){
        if(dp[i][j])return dp[i][j];
        int a =1,b=1,c=1,d=1;
        if(i>0 && matrix[i-1][j]>matrix[i][j]){
            a+=dfs(i-1,j,n,m,dp,matrix);
        }
        if(j>0 && matrix[i][j-1]>matrix[i][j]){
            b+=dfs(i,j-1,n,m,dp,matrix);
        }
        if(i<n-1 && matrix[i+1][j]>matrix[i][j]){
            c+=dfs(i+1,j,n,m,dp,matrix);
        }
        if(j<m-1 && matrix[i][j+1]>matrix[i][j]){
            d+=dfs(i,j+1,n,m,dp,matrix);
        }
        dp[i][j]=max({a,b,c,d});
        return dp[i][j];
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int longpath  = INT_MIN;
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res = dfs(i,j,n,m,dp,matrix);
                longpath = max(longpath,res);
            }
        }
        return longpath;
    }
};