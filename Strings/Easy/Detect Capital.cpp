#include <bits/stdc++.h>
using namespace std;


bool detectCapitalUse(string word) {
        int n = word.size();
        int up=0,low=0;
        for(auto i:word){
            if(isupper(i)){
                up++;
            }else{
                low++;
            }
        }
        if(up==n)return true;
        else if(low==n)return true;
        else if(isupper(word[0]) && low==n-1)return true;
        return false;
    }