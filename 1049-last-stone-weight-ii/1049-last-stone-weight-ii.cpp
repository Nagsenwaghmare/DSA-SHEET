class Solution {
public:
    int lastStoneWeightII(vector<int>& a) {
        int n = a.size();
        int sum =0;
        for(auto i:a){
            sum+=i;
        }
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)dp[i][j]=false;
                if(j==0)dp[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(a[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j-a[i-1]])||(dp[i-1][j]));
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int mini =INT_MAX;
        for(int i=0;i<=(sum/2);i++){
            if(dp[n][i]){
                mini = min(mini,sum-2*i);
            }
        }
        return mini;
    }
};