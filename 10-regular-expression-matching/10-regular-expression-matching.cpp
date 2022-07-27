class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,false));
        dp[0][0] = true;
        for(int j=2;j<n+1;j++){
            if(p[j-1]=='*' && dp[0][j-2]){
                dp[0][j] = true;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                char curS = s[(i - 1)];
                char curP = p[(j - 1)];
                if(curS == curP || curP == '.'){
                    dp[i][j] = dp[i - 1][j - 1];
                }else if(curP == '*'){
                    char preCurP = p[(j - 2)];
                    if(preCurP != '.' && preCurP != curS){
                        dp[i][j] = dp[i][j - 2];
                    }else{
                        dp[i][j] = dp[i][j - 2] || dp[i - 1][j];
                    }
                }
            }
        }
        return dp[m][n];
    }
};