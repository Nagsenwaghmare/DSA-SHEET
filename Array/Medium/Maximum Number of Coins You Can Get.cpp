#include <bits/stdc++.h>
using namespace std;




static bool cmp(int a,int b){
        return a>b;
    }
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end(),cmp);
        for(auto i:piles){
            cout<<i<<" ";
        }
        int last=n-1;
        int max_coins = 0;
        for(int i=1;i<n && (i)<last;i+=2){
            max_coins+=piles[i];
            last--;
        }
        return max_coins;
    }