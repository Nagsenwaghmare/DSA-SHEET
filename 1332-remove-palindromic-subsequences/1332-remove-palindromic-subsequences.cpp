class Solution {
public:
    bool ispalindrome(string s){
        int n = s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.empty()) return 0;
        else if(ispalindrome(s))return 1;
        return 2;
    }
};