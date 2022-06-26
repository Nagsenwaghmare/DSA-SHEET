// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int N){
        // code here
        int two = 2,ans = 0;
    int n = N;
    while(n){
        ans += (N/two)*(two>>1);
        if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1;
        two <<= 1;
        n >>= 1;
    }
    return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countBits(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends