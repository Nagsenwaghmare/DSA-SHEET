// here we gonna discuss the recursive as well as memoization solution 
// firstly there are two choices for us whether to pick it or not pick it if item weight is less than or equal to capacity weight.
// if wt of current item is greater then there is no choice for us we have to left it behind and move to the next item 

#include <bits/stdc++.h>
using namespace std;
// below is the recursive solution for the o-1 knapsack problem.
int knapSack(int W, int wt[], int val[], int n) 
    {   if(n==0 ||W==0)return 0;
       if(wt[n-1]<=W){
           return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }else{
           return knapSack(W,wt,val,n-1);
       }
    }


    //Memoised solution;
    class Solution{
    int  dp[1002][1002];
    Solution()
    {
        memset(dp,-1,sizeof(dp));
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    {  if(n==0 ||W==0)return 0;
        if(dp[n][W]!=-1)return dp[n][W];
       if(wt[n-1]<=W){
           return dp[n][W]=max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }else{
           return dp[n][W]=knapSack(W,wt,val,n-1);
       }
    }
    };
/// Top -Down Dp solution

int  dp[1002][1002];
    int knapSack(int W, int wt[], int val[], int n) 
    {  for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){
             dp[i][j]=0;   
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){
                if(wt[i-1]<=j){
                    dp[i][j]  = max((val[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
    }