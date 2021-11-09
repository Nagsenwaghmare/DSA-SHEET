


#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int checkint(string str){
        stringstream nag(str);
        int x  = 0;
        nag>>x;
        return x;
    }
    vector<string> addname(vector<string>& tra){
        vector<string>n;
        for(int i=0;i<tra.size();i++){
            string na = "";
            int cname = 0;
            for(int j=0;j<tra[i].length();j++){
                if(tra[i][j]==','){
                    cname++;
                }
                if(tra[i][j]!=',' && cname==0){
                    na+=tra[i][j];
                }
            }
            n.push_back(na);
        }
         return n;
        
    }
    vector<int> addtime(vector<string>& tra){
        vector<int>n;
        for(int i=0;i<tra.size();i++){
            string na = "";
            int cname = 0;
            for(int j=0;j<tra[i].length();j++){
                if(tra[i][j]==','){
                    cname++;
                }
                if(tra[i][j]!=',' && cname==1){
                    na+=tra[i][j];
                }
            }
            int t = checkint(na);
            n.push_back(t);
        }
         return n;
        
    }
    vector<int> addamount(vector<string>& tra){
        vector<int>n;
        for(int i=0;i<tra.size();i++){
            string na = "";
            int cname = 0;
            for(int j=0;j<tra[i].length();j++){
                if(tra[i][j]==','){
                    cname++;
                }
                if(tra[i][j]!=',' && cname==2){
                    na+=tra[i][j];
                }
            }
            int t = checkint(na);
            n.push_back(t);
        }
         return n;
        
    }
    vector<string> addcity(vector<string>& tra){
        vector<string>n;
        for(int i=0;i<tra.size();i++){
            string na = "";
            int cname = 0;
            for(int j=0;j<tra[i].length();j++){
                if(tra[i][j]==','){
                    cname++;
                }
                if(tra[i][j]!=',' && cname==3){
                    na+=tra[i][j];
                }
            }
            n.push_back(na);
        }
         return n;
        
    }
     vector<string> addnam(vector<string>& tra){
        vector<string>n;
        for(int i=0;i<tra.size();i++){
            string na = "";
            int cname = 0;
            for(int j=0;j<tra[i].length();j++){
                if(tra[i][j]==','){
                    cname++;
                }
                if(tra[i][j]!=',' && cname==0){
                    na+=tra[i][j];
                }
            }
            n.push_back(na);
        }
         return n;
        
    }
    vector<string> invalidTransactions(vector<string>& tra) {
        int n  = tra.size();
        vector<string>invalid;
        vector<string> name = addnam(tra);
        vector<int> time = addtime(tra);
        vector<int> amount = addamount(tra);
        vector<string> city = addcity(tra);
        for(int i=0;i<n;i++){
            if(i==n-1){
                if(amount[i]>1000){
                invalid.push_back(tra[i]);
                }else if(name[i]==name[i-1] && time[i]-time[i-1]<=60 && city[i]!=city[i-1]){
                    invalid.push_back(tra[i]);
                }
                break;
            }
            if(amount[i]>1000){
                invalid.push_back(tra[i]);
            }else if(name[i]==name[i+1] && time[i+1]-time[i]<=60 && city[i]!=city[i+1]){
                invalid.push_back(tra[i]);
            }
        }
        return invalid;
    }
};