class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        set<int>s;
        int ps =0;
        int ans =0;
        s.insert(0);
        for(auto i:nums){
            ps+=i;
            if(s.find(ps-target)!=s.end()){
                ans++;
                s.clear();
            }
            s.insert(ps);
        }
        return ans;
    }
};