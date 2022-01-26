#include <bits/stdc++.h>
using namespace std;

int numSplits(string s) {
        int n = s.length();
        if(n==1) return 0;
        int arr1[26],arr2[26];
        fill(arr1,arr1+26,0);
        fill(arr2,arr2+26,0);
        arr1[s[0]-'a']++;
        
        int dis1=1,dis2=0;
        for(int i=1;i<n;i++){
            if(arr2[s[i]-'a']==0)
                dis2++;
            arr2[s[i]-'a']++;
        }
        int ans = 0;
        
        for(int i=1;i<n;i++){
            if(dis1==dis2)
                ans++;
            if(!arr1[s[i]-'a'])
                dis1++;
            arr1[s[i]-'a']++;
            
            if(arr2[s[i]-'a']==1)
                dis2--;
            arr2[s[i]-'a']--;
        }
        return ans;
    }