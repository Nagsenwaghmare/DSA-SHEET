// https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1/?track=DSASP-Recursion&batchId=154#


#include <bits/stdc++.h>
using namespace std;


int countDigits(int n)
    {
       
       if(n<10) return 1;
       else return 1+countDigits(n/10);
    }