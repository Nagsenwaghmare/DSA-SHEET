#include <bits/stdc++.h>
using namespace std;


string decodeString(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }else{
                string curr = "";
                while(st.top()!='['){
                    curr = st.top() + curr;
                    st.pop();
                }
                st.pop();
                string num = "";
                while(!st.empty() && isdigit(st.top())){
                    num = st.top()+num;
                    st.pop();
                }
                stringstream geek(num);
                int k = 0;
                geek>>k;
                while(k--){
                    for(int i=0;i<curr.length();i++){
                        st.push(curr[i]);
                    }
                }
            }
        }
        string str = "";
        while(!st.empty()){
            str = st.top()+str;
            st.pop();
        }
        return str;
    }