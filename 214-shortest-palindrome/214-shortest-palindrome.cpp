class Solution {
public:
    string shortestPalindrome(string str) {
        string temp = str;
        reverse(temp.begin(),temp.end());
        string s = str + '#' + temp;
        int n = s.size();
        int lps[n] ;
        lps[0] = 0;
        int i=1;
        int len = 0;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }else{
                if(len==0){
                    lps[i] = len;
                    i++;
                }else{
                    len=lps[len-1];
                }
            }
        }
        string k = str.substr(lps[n-1]);
        reverse(k.begin(),k.end());
        return k+str;
    }
};