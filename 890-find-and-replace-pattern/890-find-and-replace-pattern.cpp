class Solution {
public:
    bool isisomorphic(string a,string b){
        int p[26] = {0};
        int q [26] = {0};
        int n = a.size();
        for(int i=0;i<n;i++){
            if(p[a[i]-'a']!=q[b[i]-'a'])return 0;
            p[a[i]-'a'] = q[b[i]-'a'] = i+1;
        }
        return 1;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        for(auto i:words){
            if(isisomorphic(i,pattern)){
                res.push_back(i);
            }
        }
        return res;
    }
};