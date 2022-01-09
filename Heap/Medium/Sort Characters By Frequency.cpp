
#include <bits/stdc++.h>
using namespace std;



string frequencySort(string s) {
        string str= "";
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            int k = pq.top().first;
            while((k--)>0){
                str+=pq.top().second;
            }
            pq.pop();
        }
        return str;
    }

