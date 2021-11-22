// https://practice.geeksforgeeks.org/problems/digital-root/1/?track=DSASP-Recursion&batchId=154#






#include <bits/stdc++.h>
using namespace std;


int sum(int n){
        if(n==0 || n==1) return n;
        return n%10+sum(n/10);
    }
    int digitalRoot(int n)
    {   
        if(n<10) return n;
        else return digitalRoot(sum(n));
        
        
    }