class Solution {
public:
    int memoize(int r,int m,int n,vector<string>& strs,vector<vector<vector<int>>> &dp)
    {
        int zero=0,one=0;
        for(int i=0;i<strs[r].size();i++)  //counting 1's and 0's
        {
            if(strs[r][i]=='0') zero++;
            else one++;
        }
        
        if(r==0)
        {
            if(m-zero>=0 && n-one>=0)  return 1;
            return 0;
        }
        
        if(dp[r][m][n]!=-1)
            return dp[r][m][n];
        
        int notPick = memoize(r-1,m,n,strs,dp);
        int pick = INT_MIN;
        if(m-zero>=0 && n-one>=0)
            pick = memoize(r-1,m-zero,n-one,strs,dp) + 1;
        return dp[r][m][n] = max(pick,notPick);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int r = strs.size()-1;
        // vector<vector<vector<int>>>dp;
        vector< vector< vector<int> > > dp(r+1 , vector< vector<int> > (m+1, vector<int> (n+1,-1)));
        // memset(dp,-1,sizeof(dp));
        return memoize(r,m,n,strs,dp);
    }
};