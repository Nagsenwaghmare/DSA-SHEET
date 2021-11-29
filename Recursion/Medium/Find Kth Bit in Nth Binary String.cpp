


#include <bits/stdc++.h>
using namespace std;






string S(int n){
         if(n == 1){ return "0";}
        
         string str = S(n-1);
         string tmp = str;
         for(int i = 0; i <str.length(); i++){
             tmp[i] = (str[i] == '0' ? '1' : '0');
         }
         reverse(tmp.begin(), tmp.end());
        return (str + "1" + tmp);
    }
    
    
    char findKthBit(int n, int k) {
        string s = S(n);
        return s[k-1];
    }