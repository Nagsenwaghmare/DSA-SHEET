class Solution {
public:
    bool issubsetsum(vector<int>&a,int k){
        int  n = a.size();
        bool dp[n+1][k+1];
        for(int i=0;i<=k;i++){
                dp[0][i] = false;
        }
        for(int i=0;i<=n;i++){
                dp[i][0] = true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                if(a[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j-a[i-1]])||(dp[i-1][j]));
                }else{
                    dp[i][j] =dp[i-1][j];
                }
            }
        }
        return dp[n][k];
    }
    bool canPartition(vector<int>& a) {
        int sum = 0;
        for(auto i:a){
            sum+=i;
        }
        if(sum%2!=0){
            return false;
        }else{
            int k = sum/2;
            return issubsetsum(a,k);
        }
        return true;
    }
};