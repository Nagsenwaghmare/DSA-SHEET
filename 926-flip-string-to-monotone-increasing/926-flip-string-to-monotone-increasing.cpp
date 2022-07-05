class Solution {
public:
    int minFlipsMonoIncr(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top()=='1' && s[i]=='0'){
                st.pop();
                cnt++;
            }else{
                st.push(s[i]);
            }
        }
        return cnt;
    }
};