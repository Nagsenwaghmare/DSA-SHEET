class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        string k = "abcdefghijklmnopqrstuvwxyz";
        for(auto i:k){
            if(mp.find(i)==mp.end())return false;
        }
        return true;
    }
};