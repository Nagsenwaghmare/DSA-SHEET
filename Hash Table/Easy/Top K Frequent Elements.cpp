#include<bits/stdc++.h>
using namespace std;



bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        mp['\0'] = 0;
        for(int i=1;i<=order.size();i++){
            mp[order[i-1]] = i;
        }
        for(int i=0;i<words.size()-1;i++){
                for(int j=0;j<=words[i].size();j++){
                    if(mp[words[i][j]]==mp[words[i+1][j]]) continue;
                    if(mp[words[i][j]]>mp[words[i+1][j]]){
                        return false;
                    }else{
                        break;
                    }
                } 
        }
        return true;
    }