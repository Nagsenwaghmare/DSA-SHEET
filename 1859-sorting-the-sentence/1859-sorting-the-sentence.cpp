class Solution {
public:
    string sortSentence(string sy) {
        stringstream geek(sy);
        string str  ="";
        vector<string>res;
        int cnt=0;
        while(geek>>str){
            res.push_back(str);
            cnt++;
        }
        map<int,string>mp;
        for(int i=0;i<res.size();i++){
            mp[res[i][res[i].size()-1]-'0'] = res[i].substr(0,res[i].size()-1);
        }
        string s="";
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<"\n";
            s+=i.second;
            s+=" ";
        }
        return s.substr(0,s.size()-1);
    }
};