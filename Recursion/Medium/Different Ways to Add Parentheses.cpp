#include <bits/stdc++.h>
using namespace std;

vector<int> diffWaysToCompute(string str) {
        vector <int> res;
        int n = str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='+' ||str[i]=='*'|| str[i]=='-'){
                vector<int>res1 = diffWaysToCompute(str.substr(0,i));
                vector<int>res2 = diffWaysToCompute(str.substr(i+1,n));
                for(auto n:res1){
                    for(auto x:res2){
                        if(str[i]=='*'){
                            res.push_back(n*x);
                        }else if(str[i]=='-'){
                            res.push_back(n-x);
                        }else{
                            res.push_back(n+x);
                        }
                    }
                }
            }
        }
        if(res.empty()){
            stringstream geek(str);
            int x = 0;
            geek>>x;
            res.push_back(x);
           return res; 
        }
        return res;
    }