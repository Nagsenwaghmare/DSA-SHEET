#include <bits/stdc++.h>
using namespace std;

// recursive solution 


bool issubsum(vector<int>&arr,int n,int sum){
        if(n==0 && sum==0) return true;
        if(sum==0) return true;
        if(n==0) return false;
        if(arr[n-1]<=sum){
            return (issubsum(arr,n-1,sum-arr[n-1]) ||issubsum(arr,n-1,sum));
        }else{
            return issubsum(arr,n-1,sum);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        return issubsum(arr,n,sum);
    }

// top-down dp

// in this question we have given a array and a sum we have to find if there exist  any subarray such that sum of subarray become equals to
// the sum
// we have to choices first if the array element is less than or equal to the 
//  1) include the given element in your subarray and check if there exist any sub array which exist with given sum
//  2)don't include the given element and then chack 
//  if any of this condition return true it means there exist a sub array which has sum euqal to the given sum;

bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)dp[i][j]=false;
                if(j==0)dp[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j-arr[i-1]])||(dp[i-1][j]));
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }

