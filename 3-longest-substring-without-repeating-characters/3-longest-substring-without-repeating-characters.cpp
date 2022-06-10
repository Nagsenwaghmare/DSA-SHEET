class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left= 0;
        int longlen =0 ;
        int n = s.size();
        map<char,int>mp;
        for(int right=0;right<n;right++){
            if(mp.find(s[right])!=mp.end()){
                left = max(left,mp[s[right]]+1);
            }
            mp[s[right]] = right;
            longlen = max(longlen,right-left+1);
        }
        return longlen;
    }
};