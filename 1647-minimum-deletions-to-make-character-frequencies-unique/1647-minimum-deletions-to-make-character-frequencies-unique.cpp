class Solution {
public:
    int minDeletions(string s) {
        map<int,int>mp;
        vector<int> counter(26,0);
        for(auto it : s){
            counter[it-'a'] ++;
        }
        for(int i = 0; i < 26; i++){
            mp[counter[i]] ++;
        }
        int ans=0;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            int key = it->first;
            int value = it->second;
            
            if(value == 1 || key == 0){
                continue;
            }
            int new_val = value-1;
            mp[key - 1] += new_val;
            ans += new_val;
        }
        return ans;
    }
};