class Solution {
public:
    int dp[502][502];
    int solve(vector<int>& a,int i,int j){
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mini = INT_MIN;
        for(int k=i;k<j;k++){
            int ans = solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
            mini = max(mini,ans);
        }
        return dp[i][j]=mini;
    }
    int maxCoins(vector<int>& a) {
        a.insert(a.begin(),1);
        a.push_back(1);
        int n = a.size();
        memset(dp,-1,sizeof(dp));
        return solve(a,1,n-1);
    }
};