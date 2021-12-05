#include <bits/stdc++.h>
using namespace std;




/// recursive solution

int  maximumcuts(int rodlength,int a,int b ,int c){
        if(rodlength<0) return -1;
        if(rodlength==0) return 0;

    int res = max(maximumcuts(rodlength-a,a,b,c),
                    max(maximumcuts(rodlength-b,a,b,c),
                    maximumcuts(rodlength-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    return res+1;
}



//dynamic programming solution



int  maximumcuts(int rodlength,int a,int b ,int c){
   vector<int> dp(rodlength+1,-1);
   dp[0] = 0;
   for(int i=1;i<rodlength+1;i++){
       if(i-a>=0) dp[i] = max(dp[i],dp[i-a]);
       if(i-b>=0) dp[i] = max(dp[i],dp[i-b]);
       if(i-c>=0) dp[i] = max(dp[i],dp[i-c]);
       if(dp[i]!=-1){
           dp[i]++;
       }
   }
   return dp[rodlength];
}





























int main(){
    int rodlength;
    cin>>rodlength;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<maximumcuts(rodlength,a,b,c);
}