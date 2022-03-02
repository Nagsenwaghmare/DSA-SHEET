class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        cout<<n<<" "<<m<<" ";
        int i=0;
        int j =0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                i++;
            }
             j++;
        }
        cout<<i<<" ";
        return (i)==n?1:0;
    }
};