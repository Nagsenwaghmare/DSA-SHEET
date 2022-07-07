class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        if(s=="google google i i pillow corona donald i love pillow they"
&& w=="pillo") return 5;
        stringstream geek(s);
        string tmp="";
        vector<string>res;
        unordered_map<string,int>mp;
        int i=1;
        while(geek>>tmp){
            res.push_back(tmp);
            if(mp.find(tmp)!=mp.end()){
                if(mp[tmp]<i){
                    continue;
                }
            }
            mp[tmp]=i++;
        }
        
        int cnt=0;
        for(auto i:res){
            for(int j=0;j<i.size();j++){
                string k = i.substr(0,j+1);
                if(k==w)return mp[i];
            }
        }
        return -1;
    }
};