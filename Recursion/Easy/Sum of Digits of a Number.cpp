// https://practice.geeksforgeeks.org/problems/sum-of-digits-of-a-number/1/?track=DSASP-Recursion&batchId=154#



#include <bits/stdc++.h>
using namespace std;


int sumOfDigits(int n)
    {
        //Your code here
        if(n==1) return 1;
        if(n==0) return 0;
        return n%10+sumOfDigits(n/10);
    }