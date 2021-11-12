
#include <bits/stdc++.h>
using namespace std;

int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        if(n%3==0) return pow(3,n/3);
        if(n%3==1) return (4*pow(3,(n/3)-1));
        if(n%3==2) return (2*pow(3,n/3));
    }

//     Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

// Return the maximum product you can get.