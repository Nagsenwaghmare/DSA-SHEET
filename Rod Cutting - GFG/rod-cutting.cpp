// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int len) {
        //code here
        int n = len;
        vector<int>length;
        for(int i=1;i<=n;i++){
            length.push_back(i);
        }
        int dp[n+1][len+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<len+1;j++){
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<len+1;j++){
                if(length[i-1]<=j){
                    dp[i][j] = max(dp[i-1][j],(dp[i][j-length[i-1]]+price[i-1]));
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][len];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends