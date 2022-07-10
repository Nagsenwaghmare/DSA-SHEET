class Solution {
public:
    vector<vector<string>>res;
    vector<string>temp;
    
    bool ispalindrome(string s,int l,int r){
        while(l<r){
            if(s[l++]!=s[r--]){
                return false;
            }
        }
        return true;
    }
    void backtrack(string s,int idx){
        if(idx==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(ispalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                backtrack(s,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        backtrack(s,0);
        return res;
    }
};