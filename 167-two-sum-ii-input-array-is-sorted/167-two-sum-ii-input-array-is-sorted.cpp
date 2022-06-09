class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        unordered_map<int,int>mp;
        int n = a.size();
        for(int i=0;i<n;i++){
            if(mp.find(k-a[i])!=mp.end()){
                return {mp[k-a[i]],i+1};
            }
            mp[a[i]]=i+1;
        }
        return {-1,-1};
    }
};