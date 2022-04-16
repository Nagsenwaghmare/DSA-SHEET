#include <bits/stdc++.h>
using namespace std;



string printlcs(string s1,string s2){
    int m = s1.size();
    int n = s2.size();
    int dp [m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                dp[i][j] =0;
            }
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=m;
    int j =n;
    string res = "";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--;j--;
        }else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
    reverse(res.begin(),res.end());
    return res;

}
int main(){
    string s1 = "AATCC";
    string s2 = "ACACG";
    cout<<printlcs(s1,s2);
}