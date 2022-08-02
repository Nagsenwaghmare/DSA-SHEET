class Solution {
public:
    string longestWord(vector<string>& words) {
        string ans = "";
        set<string>st;
        sort(words.begin(),words.end());
        for(auto w:words){
            if(w.size()==1 || st.find(w.substr(0,w.size()-1))!=st.end()){
                ans = w.size()>ans.size()?w:ans;
                st.insert(w);
            }
        }
        return ans;
    }
};