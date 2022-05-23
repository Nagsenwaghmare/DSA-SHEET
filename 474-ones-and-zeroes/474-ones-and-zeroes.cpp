class Solution {
public:
    
    int findMaxForm(vector<string>& strs, int M, int N) {
        int size = strs.size();
        vector<vector<vector<int>>> dp(size,vector<vector<int>>(M+1,vector<int>(N+1,0)));
        
        int zero=0,one=0;
        
        for(int i=0;i<strs[0].size();i++) //count of 0 and 1 for first index
        {
            if(strs[0][i]=='0') zero++;
            else one++;
        }
        //base case
        for(int i=zero;i<=M;i++)
        {
            for(int j=one;j<=N;j++)
                dp[0][i][j]=1;
        }
        
        
        for(int r=1;r<size;r++)
        {
            zero=0,one=0; //counting 0 and 1 for string
            for(int i=0;i<strs[r].size();i++)
            {
                if(strs[r][i]=='0') zero++;
                else one++;
            }
            
            for(int m=0;m<=M;m++)  //loop for zero balance
            {
                for(int n=0;n<=N;n++)  //loop for one balance
                {
                    int notPick = dp[r-1][m][n];
                    int pick = INT_MIN;
                    if(m-zero>=0 && n-one>=0)
                        pick = dp[r-1][m-zero][n-one] + 1;
                    dp[r][m][n] = max(pick,notPick);
                }
            }
        }
        return dp[size-1][M][N];
    }
};