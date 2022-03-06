class Solution {
public:
    vector<int> sortJumbled(vector<int>& mp, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> v;
        vector<int>result;
        for(int i=0;i<n;i++){
            string s = to_string(nums[i]);
            
            for(int j=0;j<s.size();j++){
                s[j] = mp[s[j]-'0']+'0';
            }
            int x = stoi(s);
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        for(auto i:v){
            result.push_back(nums[i.second]);
        }
        return result;
    }
};