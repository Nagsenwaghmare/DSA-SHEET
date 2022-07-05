class Solution {
public:
    bool halvesAreAlike(string s) {
        int res=0;
        int n = s.size();
        set<char>st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0;i<n/2;i++){
            if(st.find(s[i])!=st.end())res++;
        }
        for(int i=n/2;i<n;i++){
            if(st.find(s[i])!=st.end())res--;
        }
        return res==0?1:0;
    }
};