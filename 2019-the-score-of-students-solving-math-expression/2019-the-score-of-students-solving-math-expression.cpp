class Solution {
public:
    int findreal(vector<int>v){
        if(v.size()==1){
            return v[0];
        }
        bool pro = false;
        int i;
        for(i=0;i<v.size();i++){
            if(v[i]==-2){
                pro = true;
                break;
            }
        }
        if(pro){
           vector<int>vec;
            for(int j=0;j<=i-2;j++){
                vec.push_back(v[j]);
            }
            int val = v[i-1]*v[i+1];
            vec.push_back(val);
            for(int j=i+2;j<v.size();j++){
                vec.push_back(v[j]);
            }
            return findreal(vec);
        }
        int sum = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=-1) sum+=v[i];
        }
        return sum;
    }
    
    vector<vector<set<int>>>dp;
    
    set<int> recur(string s, int l, int r){
        bool ope = false;
        set<int>res;
        for(int i=l+1;i<r;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
                ope = true;
                if(dp[l][i-1].size()==0){
                    dp[l][i-1] = recur(s,l,i-1);
                }
                if(dp[i+1][r].size()==0){
                    dp[i+1][r] = recur(s,i+1,r);
                }
                for(auto a:dp[l][i-1]){
                    for(auto b:dp[i+1][r]){
                        if(s[i]=='+'){
                            if(a+b<1001)
                                res.insert(a+b);
                        }
                        else{
                            if(a*b<1001){
                                 res.insert(a*b);
                            }
                        }
                    }
                }
            }
        }
        if(ope){
            return res;
        }
        int ans = stoi(s.substr(l,r-l+1));
        return {ans};
    }
    
    int scoreOfStudents(string s, vector<int>& answers) {
        int n = s.length();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                v[i] = -1;
            }else if(s[i]=='*'){
                v[i] = -2;
            }else{
                v[i] = s[i]-'0';
            }
        }
        int real = findreal(v);
        dp = vector<vector<set<int>>> (n,vector<set<int>>(n));
        set<int>anss = recur(s,0,n-1);
        int res = 0;
        for(int i=0;i<answers.size();i++){
            if(answers[i]==real){
                res+=5;
            }else if(anss.find(answers[i])!=anss.end()){
                res+=2;
            }
        }
        return res;
    }
};