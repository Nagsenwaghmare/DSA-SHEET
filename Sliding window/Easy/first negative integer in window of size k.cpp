#include <bits/stdc++.h>
using namespace std;


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int k) {
        queue<int>q;
        int i=0;
        int j=0;
        vector<long long>res;
        while(j<N){
            if(A[j]<0)q.push(A[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(q.empty())res.push_back(0);
                else{
                    res.push_back(q.front());
                }
                if(A[i]==q.front())q.pop();
                i++;
                j++;
            }
        }
        return res;
 }