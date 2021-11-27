
#include <bits/stdc++.h>
using namespace std;

// just one line solution

bool divisorGame(int n) {
        return (n-1)%2==0?0:1;
    }

bool divisorGame(int n) {
        if(n==1) return false;
        if(n==2) return true;
        for(int i=1;i<n;i++){
            if(n%i==0){
                return !divisorGame(n-i);
            }
        }
        return false;
    }