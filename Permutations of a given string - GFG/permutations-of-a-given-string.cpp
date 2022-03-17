// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<string>res;
	void backtrack(int l ,string s,int r){
	    if(l==r){
	        res.push_back(s);
	        return;
	    }
	    for(int i=l;i<=r;i++){
	        swap(s[i],s[l]);
	        backtrack(l+1,s,r);
	        swap(s[i],s[l]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    int l=0;
		    int r = S.size()-1;
		    backtrack(l,S,r);
		    sort(res.begin(),res.end());
		    return res;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends