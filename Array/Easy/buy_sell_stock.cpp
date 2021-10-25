

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0


#include <bits/stdc++.h>
using namespace std;





int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn=INT_MAX;
        int n=prices.size();
        
        for(int i=0; i<n; i++){
            mn = min(mn,prices[i]);
            ans = max(ans, (prices[i]-mn) );
        }
        
        return ans;
    }