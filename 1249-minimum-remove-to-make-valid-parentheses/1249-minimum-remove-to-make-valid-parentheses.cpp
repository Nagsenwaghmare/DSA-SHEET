class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack <int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }else{
                    s[i] = '0';
                }
            }
        }
        while(!st.empty()){
         s[st.top()] = '0';
            st.pop();
        }
        string str ="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                str+=s[i];
            }
        }
        return str;
    }
};