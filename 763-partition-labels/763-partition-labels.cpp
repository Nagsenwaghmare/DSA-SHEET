class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>res;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        int start = 0;
        int end = mp[s[0]];
        int i;
        for(i=1;i<s.size();i++){
            if(i>=start && mp[s[i]]<=end)continue;
            if(i>end){
                res.push_back(end-start+1);
                start = i;
                end = mp[s[i]];
                
            }
            if(i>=start &&mp[s[i]]>=end){
                end = mp[s[i]];
            }
        }
        if(i==s.size())res.push_back(end-start+1);
        return res;
    }
};