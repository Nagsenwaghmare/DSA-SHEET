class Solution {
public:
    string maximumBinaryString(string s) {
        int zero=0;
        int one=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero++;
            else if(zero==0)one++;
            s[i]='1';
        }
        if(one<n)s[zero+one-1] ='0';
        return s;
    }
};