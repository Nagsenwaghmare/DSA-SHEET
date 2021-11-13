#include <bits/stdc++.h>
using namespace std;


int kthFactor(int n, int k) {
        vector<int> fact;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                fact.push_back(i);
            }
        }
        if(fact.size()<k) return -1;
        else{
            return fact[k-1];
        }
    }



//     Given two positive integers n and k.

// A factor of an integer n is defined as an integer i where n % i == 0.

// Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.