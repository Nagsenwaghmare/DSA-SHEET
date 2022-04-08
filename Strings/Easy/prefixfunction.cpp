#include<bits/stdc++.h>
using namespace std;
void prefix(vector<int>&res,string s){
       for(int i=0;i<s.size();i++){
           for(int k=0;k<=i;k++){
               if(s.substr(0,k)==s.substr(i-k+1,k)){
                   res[i]=k;
               }
           }
       }
}
int main(){
    string s1 = "ababababa";
    vector<int>res(s1.size(),0);
    prefix(res,s1);
    for(auto i:res){
        cout<<i<<" ";
    }
}