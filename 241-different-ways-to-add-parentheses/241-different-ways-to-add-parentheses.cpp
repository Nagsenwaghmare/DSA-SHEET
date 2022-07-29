class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>res;
        int n  = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='-'||s[i]=='+' ||s[i]=='*'){
                vector<int>front = diffWaysToCompute(s.substr(0,i));
                vector<int>back = diffWaysToCompute(s.substr(i+1));
                for(auto f:front){
                    for(auto b:back){
                        if(s[i]=='*'){
                            res.push_back(f*b);
                        }else if(s[i]=='+'){
                            res.push_back(f+b);
                        }else{
                            res.push_back(f-b);
                        }
                    }
                }
            }
        }if(res.empty()){
            stringstream geek(s);
            int x = 0;
            geek>>x;
            res.push_back(x);
           return res; 
        }
        return res;
    }
};