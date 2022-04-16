class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
    int sum1=0,sum2=0,sum3=0;
    for(auto i:s1){
            sum1+=i;
    }
    for(auto i:s2){
        sum2+=i;
    }
    int m = s1.size();
    int n = s2.size();
    int dp [m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                dp[i][j] =0;
            }
        }
   
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = s1[i-1]+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int ans = dp[m][n];
    return sum1+sum2-2*ans;
    }
};