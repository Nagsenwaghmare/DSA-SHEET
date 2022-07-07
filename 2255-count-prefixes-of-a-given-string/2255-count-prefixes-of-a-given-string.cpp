class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>mp;
        for(auto i:words){
            mp[i]++;
        }
        int cnt=0;
        for(int i=0;i<s.size();i++){
            string k = s.substr(0,i+1);
            if(mp.find(k)!=mp.end()){
                cnt+=mp[k];
            }
        }
        return cnt;
    }
};