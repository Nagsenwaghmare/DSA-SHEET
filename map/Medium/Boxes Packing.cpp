// codeforces question - https://codeforces.com/contest/903/problem/C


#include <bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       map<int,int>m;
       int mx = 0;
       for(int i=0;i<n;i++){
              int t;
              cin>>t;
              m[t]++;
              if(m[t]>mx){
                     mx = m[t];
              }
       }
       cout<<mx<<'\n';
}