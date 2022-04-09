// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
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
        int half = sum/2;
        for(int i=0;i<=half;i++){
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
	    int k = *max_element(res.begin(),res.end());
	    
	    return sum-2*k;
	}  
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends