class Solution {
public:
    bool ispal(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
    string breakPalindrome(string s) {
        int n = s.size();
        string k = s;
        if(n==1) return "";
        bool flag = false;
        for(int i=0;i<s.size();i++){
            if(s[i]!='a'){
                s[i]='a';
                flag = true;
                break;
            }
        }
        if(ispal(s)){
            k[n-1]='b';
            return k;
        }
        if(flag==false){
            s[n-1]='b';
        }
        return s;
    }
};