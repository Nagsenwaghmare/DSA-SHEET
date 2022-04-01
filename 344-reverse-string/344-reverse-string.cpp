class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>str;
        stack<char>st;
        for(auto i:s)st.push(i);
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        s = str;
    }
};