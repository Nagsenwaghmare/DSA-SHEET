#include <bits/stdc++.h>
using namespace std;

int knapsack(int v[],int wt[],int w,int n){
    if(n==0 || w==0) return 0;
    if(wt[n-1]>w)
        return knapsack(v,wt,w,n-1);
    else
        return  max(v[n-1]+knapsack(v,wt,w-wt[n-1],n-1),knapsack(v,wt,w,n-1));


}

int main(){
    int v[] = {10,40,30,50};
    int wt[] = {5,4,6,3};
    int w = 10;
    int n = 4;
    cout<<knapsack(v,wt,w,n);
}



//dynaminc programming solution 


  int knapSack(int W, int wt[], int val[], int n) 
{ 
  
    
    int i, j; 
    int dp[n + 1][W + 1]; 
  
   for(int i=0; i<=W; i++)
   {
       dp[0][i] = 0;
   }
   
   for(int i=0; i<=n; i++)
   {
       dp[i][0] = 0;
   }
    
    for (i = 1; i <= n; i++) {  
        for (j = 1; j <= W; j++) { 
           if (wt[i - 1] > j) 
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);  
        } 
    } 
  
    return dp[n][W]; 
} 
