class Solution {
public:
    string addStrings(string s1, string s2) {
        int i = s1.size()-1;
        int j = s2.size()-1;
        string s = "";
        int carry =0;
        while( i>=0 || j>=0 ){
            if(i>=0)carry+=(s1[i]-'0');
            if(j>=0)carry+=(s2[j]-'0');
            s = to_string(carry%10) + s;
            carry/=10;
            i--;
            j--;
        }
        return carry?('1'+s):s;
    }
};