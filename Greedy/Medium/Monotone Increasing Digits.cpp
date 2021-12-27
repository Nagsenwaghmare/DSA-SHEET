
#include<bits/stdc++.h>
using namespace std;



int monotoneIncreasingDigits(int n) {
        string str = to_string(n);
        int k = str.size()-1;
        int marker = str.size();
        for(int i=k;i>0;i--){
            if(str[i-1]>str[i]){
                str[i-1] = str[i-1]-1;
                marker = i;
            }
        }
        for(int i=marker;i<str.size();i++){
            str[i] = '9';
        }
        return stoi(str);
    }