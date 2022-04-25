class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int>s,e,res;
        for(auto i:flowers){
            s.push_back(i[0]);
            e.push_back(i[1]);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        for(auto i:persons){
            int start = upper_bound(s.begin(),s.end(),i)-s.begin();
            int end  = lower_bound(e.begin(),e.end(),i)-e.begin();
            res.push_back(start-end);
        }
        return res;
    }
};