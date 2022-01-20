#include <bits/stdc++.h>
using namespace std;


int minOperations(string s) {
        int n = s.size();
        int cnt = 0;
        int flag=0;
            for(int i=0;i<n;i++){
                if(i%2!=0 &&s[i]=='1'){
                    flag++;
                }else if(i%2==0 && s[i]=='0'){
                    flag++;
                }
            }
            for(int i=0;i<n;i++){
                if(i%2!=0 &&s[i]=='0'){
                    cnt++;
                }else if(i%2==0 && s[i]=='1'){
                    cnt++;
                }
            }
        return min(cnt,flag);
    }