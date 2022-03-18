class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastindex(26,0);
        vector<bool>visited(26,false);
        stack<char>st;
        for(int i=0;i<s.size();i++){
            lastindex[s[i]-'a'] = i;
        }
        for(int i=0;i<s.size();i++){
            if(visited[s[i]-'a'])continue;
            while(st.size()>0 && st.top()>s[i] && lastindex[st.top()-'a']>i){
                visited[st.top()-'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            visited[s[i]-'a'] = true;
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};