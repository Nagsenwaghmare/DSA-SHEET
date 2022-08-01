class Solution {
public:
    vector<vector<int>>dp;
    int paths(int m,int n,int i,int j, vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=0)return 0;
        if(i==m-1 && j==n-1 && grid[i][j]!=1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j] = paths(m,n,i+1,j,grid)+paths(m,n,i,j+1,grid);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        dp.resize(m,vector<int>(n,-1));
        return paths(m,n,0,0,grid);
    }
};