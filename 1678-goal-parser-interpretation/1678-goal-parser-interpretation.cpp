class Solution {
public:
    string interpret(string s) {
        int i=0;
        int n = s.size();
        string res = "";
        while(i<n){
            if(s[i]=='G'){
                res+="G";
                i++;
            }else if(s[i]=='(' && s[i+1]==')'){
                res+="o";
                i+=2;
            }else{
                res+="al";
                i+=4;
            }
        }
        return res;
    }
};