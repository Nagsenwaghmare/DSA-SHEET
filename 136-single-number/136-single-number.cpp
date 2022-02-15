class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c = 0;
        for(auto i:nums){
            c^=i;
        }
        return c;
    }
};