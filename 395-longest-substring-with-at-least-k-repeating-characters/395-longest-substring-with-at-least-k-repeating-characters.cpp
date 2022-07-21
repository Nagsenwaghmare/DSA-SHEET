class Solution {
public:
    int longestSubstring(string s, int k) {
        int count[26] = {0};
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        int idx =0;
        while(idx<s.size() && count[s[idx]-'a']>=k)idx++;
        if(idx==s.size())return s.size();
        
        int left = longestSubstring(s.substr(0,idx),k);
        int right = longestSubstring(s.substr(idx+1),k);
        return max(left,right);
    }
};