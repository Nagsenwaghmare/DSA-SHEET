class Solution {
public:
    int minDistance(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        int dp[m+1][n+1];
        for(int i =0;i<m+1;i++){
            dp[i][0]=i;
        }
        for(int j=0;j<n+1;j++){
            dp[0][j]=j;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j] = 1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
        return (dp[m][n]);
    }
};