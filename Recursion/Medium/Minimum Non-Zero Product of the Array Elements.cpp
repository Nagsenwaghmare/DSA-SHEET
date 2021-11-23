#include <bits/stdc++.h>
using namespace std;



const unsigned int M = 1000000007;
    long long expon(long long N,long K){
        if(K==0) return 1;
        if(K==1) return N%M;
        if(K%2==0){
            long long temp = expon(N,K/2);
            return (temp*temp)%M;
        }else{
            long long temp = expon(N,K/2);
            temp = (temp*temp)%M;
            return (temp*(N%M))%M;
        }
    }
    int minNonZeroProduct(int p) {
        
       long long val  = pow(2,p);
        val--;
        long long N = val-1;
        long long K = val/2;
        long long ans = expon(N,K);
        return ans*((val%M))%M;
    }