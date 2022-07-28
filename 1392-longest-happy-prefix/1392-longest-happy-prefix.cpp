class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        int lps[n];
        lps[0] = 0;
        int i=1;
        int len =0;
        while(i<n){
            if(s[len]==s[i]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len==0){
                    lps[i]=0;
                    i++;
                }else{
                   len =  lps[len-1];
                }
            }
        }
        return s.substr(0,lps[n-1]);
    }
};