class Solution {
public:
    bool isvalid(int n,string str){
        string st ;
        string st1;
        for(int i=0;i<str.length();i++){
            if(i!=n){
                st1+=str[i];
            }
        }
        st = st1;
        reverse(st.begin(),st.end());
        return (st==st1);
    }
    bool validPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(isvalid(i,s))return true;
                if(isvalid(j,s))return true;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};