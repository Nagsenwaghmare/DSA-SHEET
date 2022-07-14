class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a[3] = {0};
        
        for(auto i:nums){
            a[i]++;    
        }
        vector<int>res;
        while(a[0]--){
            res.push_back(0);
        }
        while(a[1]--){
            res.push_back(1);
        }
        while(a[2]--){
            res.push_back(2);
        }
        nums = res;
    }
};