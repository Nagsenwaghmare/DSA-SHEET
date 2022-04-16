class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string s = "";
        int i=m;int j=n;
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                s.push_back(s1[i-1]);
                i--;j--;
            }else{
                if(dp[i-1][j]>dp[i][j-1]){
                    s.push_back(s1[i-1]);
                    i--;
                }else {
                    s.push_back(s2[j-1]);
                    j--;
                }
            }
        }
        while(i>0){
            s.push_back(s1[i-1]);
            i--;
        }
        while(j>0){
            s.push_back(s2[j-1]);
            j--;
        }
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        reverse(s.begin(),s.end());
        return s;
    }
};