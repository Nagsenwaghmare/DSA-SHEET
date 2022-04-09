#include<bits/stdc++.h>
using namespace std;
// in this question our aim was to find the two subset sums such that their diffrence is minimum
// so hence differance will lie between a range (0,sumofarray);
// we try to find the minimum(sum-2*(the sums which are possible from a subset));
//  and then we return minimum of all the we tried;


void issubset(int a[],int n,vector<int>&res,int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)dp[i][j]=false;
                if(j==0)dp[i][j] =true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(a[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j-a[i-1]])||(dp[i-1][j]));
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        for(int i=0;i<(sum+1)/2;i++){
            if(dp[n][i]==true)res.push_back(i);
        }
    }
	int minDifference(int a[], int n)  { 
	    int sum =0;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	    }
	    vector<int>res;
	    issubset(a,n,res,sum);
	    int mini= INT_MAX;
	    for(auto i:res){
	        mini = min(mini,sum-2*i);
	    }
	    return mini;
	} 