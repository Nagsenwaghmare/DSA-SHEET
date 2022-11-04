class Solution {
public:
    string reverseVowels(string s) {
        string str = "";
        for(auto i:s){
            if(i=='a' ||i=='e'||i=='i'||i=='o'||i=='u'||i=='A' ||i=='E'||i=='I'||i=='O'||i=='U'){
                str+=i;
            }
        }
        int j=0;
        reverse(begin(str),end(str));
        cout<<str<<" ";
        string ans= "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans+=str[j];
                j++;
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};