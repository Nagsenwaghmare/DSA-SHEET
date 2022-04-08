#include <bits/stdc++.h>
using namespace std;


// in this problem we counted the number of subsets where our sum equals to the subset sum just by counting number of true in our
// dp array simply while checking whether to add the element or not we just add up them if our current answer is true it adds 1 to
// the answer else 0

// here we also gonna take care of the edge test case when we have 0 as element of our array

long long  M = 1e9 + 7;
	int perfectSum(int arr[], int n, int sum)
	{
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = (dp[i-1][j-arr[i-1]]%M + dp[i-1][j]%M)%M;
                }else{
                    dp[i][j]=dp[i-1][j]%M;
                }
            }
        }
        return dp[n][sum];
	}