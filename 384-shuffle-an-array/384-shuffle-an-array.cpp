class Solution {
public:
    vector<int>l;
    Solution(vector<int>& nums) {
        vector<int>res = nums;
        l=nums;
    }
    
    vector<int> reset() {
        return l;
    }
    
    vector<int> shuffle() {
        vector<int>k = l;
        for(int i=k.size()-1;i>=0;i--){
            int r = rand()%(i+1);
            swap(k[i],k[r]);
        }
        return k;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */