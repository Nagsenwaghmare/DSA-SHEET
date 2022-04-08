class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto i:s){
            if(iswalnum(i)){
                str+=tolower(i);
            }
        }
        cout<<str<<" ";
        string s1 = str;
        reverse(str.begin(),str.end());
        return str==s1;
    }
};