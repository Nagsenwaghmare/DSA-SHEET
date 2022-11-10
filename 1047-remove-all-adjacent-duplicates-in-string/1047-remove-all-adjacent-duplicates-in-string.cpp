class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                if(st.top()==s[i]){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        string str = "";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(begin(str),end(str));
        return str;
    }
};