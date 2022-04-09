// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int k)  { 
	    // Your code goes here
	    vector<int>a;
	    for(int i=0;i<k;i++){
	        a.push_back(arr[i]);
	    }
	    int sum=0;
        for(auto it:a)
            sum+=it;
        int n=a.size();
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=sum;i++)
            dp[0][i]=0;
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++)
                if(a[i-1] > j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=(dp[i-1][j] || dp[i-1][j-a[i-1]] );
        
        int ans=0;
        int half=sum/2;
        for(int i=0;i<=half;i++)
            if(dp[n][i])
                ans=sum-2*i;
        return ans;
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