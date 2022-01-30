#include <bits/stdc++.h>
using namespace std;


 vector<int> sortArrayByParityII(vector<int>& a) {
        int n = a.size();
        int i;
        int j;
        for(i=0, j=1; i<n && j<n ;i+=2,j+=2){
            while(i<n && a[i]%2==0)i+=2;
            while(j<n && a[j]%2!=0)j+=2;
            if(i<n && j<n)swap(a[i],a[j]);
        }
        return a;
    }