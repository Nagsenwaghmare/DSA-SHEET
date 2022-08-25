class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(26,0);
        for(auto i:magazine){
            v[i-'a']++;
        }
        for(auto i:ransomNote){
            v[i-'a']--;
        }
        for(auto i:v){
            if(i<0)return false;
        }
        return true;
    }
};