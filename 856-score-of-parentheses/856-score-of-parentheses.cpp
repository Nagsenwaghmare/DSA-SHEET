class Solution {
public:
    int scoreOfParentheses(string s) {
        int res = 0;
        int depth = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
            }else{
                depth--;
            }
            if(s[i]==')' && s[i-1]=='('){
                res+=pow(2,depth);
            }
        }
        return res;
    }
};