class Solution {
public:
    vector<string>res;
    string temp;
    void backtrack(string s,int idx){
        if(s.size()==idx){
            res.push_back(s);
            return ;
        }
        if(isalpha(s[idx])){
            s[idx]=toupper(s[idx]);
            backtrack(s,idx+1);
            s[idx] = tolower(s[idx]);
            backtrack(s,idx+1);
        }else{
            backtrack(s,idx+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        backtrack(s,0);
        return res;
    }
};