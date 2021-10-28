#include <bits/stdc++.h>
using namespace std;

// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.




int maxProfit(vector<int>& prices) {
        int max_profit2 = 0;
        int sum = 0;
        int n = prices.size();
        
        for(int i=0;i<n-1;i++){
            if(prices[i]<prices[i+1]){
                max_profit2 = prices[i+1]-prices[i];
                sum+=max_profit2;
            }
        }
        return sum;
    }