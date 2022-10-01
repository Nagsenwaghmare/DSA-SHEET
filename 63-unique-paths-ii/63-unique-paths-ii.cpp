class Solution {
public:
    int m,n;
    vector<vector<int>>dp;
    int solve(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=m ||  j>=n || grid[i][j]!=0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==m-1 && j==n-1)return 1;
        return dp[i][j]=solve(grid, i+1,j) +solve(grid,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        dp.resize(m,vector<int>(n,-1));
        return solve(grid,0,0);
    }
};