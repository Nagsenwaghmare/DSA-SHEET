
#include <bits/stdc++.h>
using namespace std;



int countsetbits(int a){
        int count = 0;
        while(a!=0){
            a=a&(a-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++){
            res.push_back(countsetbits(i));
        }
        return res;
    }