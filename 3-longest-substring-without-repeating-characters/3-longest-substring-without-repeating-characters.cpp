class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len =0;
        int left =0;
        map<char,int>mp;
        for(int right=0;right<s.size();right++){
            if(mp.find(s[right])!=mp.end()){
                left = max(left,mp[s[right]]+1);
            }
            mp[s[right]]=right;
            len = max(len,right-left+1);
        }
        return len;
    }
};