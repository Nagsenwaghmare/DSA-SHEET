class Solution {
public:
    vector<vector<int>>dp;
    int uniquepaths(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i<0 || j<0 ||i>=m || j>=n)return 0;
        if(i==m-1 && j==n-1 && grid[i][j]!=1)return 1;
        if(dp[i][j])return dp[i][j];
        if(grid[i][j])return dp[i][j]=0;
        return dp[i][j] = uniquepaths(grid,i+1,j,m,n)+uniquepaths(grid,i,j+1,m,n);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        dp.resize(m, vector<int>(n));
        return  uniquepaths(grid,0,0,m,n);
    }
};