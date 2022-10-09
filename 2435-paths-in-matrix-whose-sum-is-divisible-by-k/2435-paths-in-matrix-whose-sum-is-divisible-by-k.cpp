class Solution {
public:
    int m,n,K;
    int M = 1e9+7;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        K = k;
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
        return dfs(0,0,0,grid,dp);
    }
    int dfs(int i,int j,int val,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
        if(i==m||j==n)return 0;
        if(i==m-1 && j==n-1 )return ((val+grid[i][j])%K)==0;
        if(dp[i][j][val]!=-1)return dp[i][j][val];
        return dp[i][j][val] = (dfs(i+1,j,(val+grid[i][j])%K,grid,dp)+dfs(i,j+1,(val+grid[i][j])%K,grid,dp))%M;
    }
    
};
