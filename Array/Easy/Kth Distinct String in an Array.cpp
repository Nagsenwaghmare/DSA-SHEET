
#include <bits/stdc++.h>
using namespace std;



string kthDistinct(vector<string>& arr, int k) {
        vector<string>str;
        unordered_map<string,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1)
                str.push_back(arr[i]);
        }
        for(int i=0;i<str.size();i++){
            if(i+1==k){
                return str[i];
            }
        }
        return "";
    }