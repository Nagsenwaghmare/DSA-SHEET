#include <bits/stdc++.h>
using namespace std;

// recursive solution to find no of ways you get the respective sum by using coins where you can use coins infinite number of time
int coincombination(int a[],int n,int sum){
    
    if(sum==0) return 1;
    if(n==0) return 0;
    int res = coincombination(a,n-1,sum);
    if(a[n-1]<=sum){
        res+=coincombination(a,n,sum-a[n-1]);
    }
    return res;
}


// dynamic programming solution  where we will use two dimensional array as n and sum both are changing 

int countcoins(vector<int> &coins,int n,int sum){
    int dp[sum+1][n+1];
    for(int i=0;i<=n;i++){
        dp[0][i] = 1;
    }
    for(int j=0;j<=sum;j++)
    {
        dp[j][0] = 0;
    }
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
                dp[i][j] = dp[i][j-1];
                if(coins[j-1]<=i){
                    dp[i][j] += dp[i-coins[j-1]][j];
                }
        }
    }
    return dp[sum][n];
}


int main(){
    int a[] = {2,3,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 10;
    cout<<coincombination(a,n,sum);
}