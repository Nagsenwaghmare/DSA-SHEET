class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        string str = "";
        int n = s.size();
        while(i<n){
            if(s[i]==' ' || i==n-1){
                if(i==n-1)str+=s[i];
                string temp = str;
                reverse(temp.begin(),temp.end());
                ans+=temp;
                if(i!=n-1)ans+=" ";
                str =  "";
            }else{
                str+=s[i];
            }
            i++;
        }
        return ans;
    }
};