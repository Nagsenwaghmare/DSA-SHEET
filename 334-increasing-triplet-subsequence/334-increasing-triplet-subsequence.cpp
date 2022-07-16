class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int MIN = -2147483648;   //-2^31
        int MAX = 2147483647;   // 2^31 - 1
        if(n==3){
            if(nums[0] < nums[1] && nums[1] < nums[2])  return true;
            return false;
        }    
        vector<int> left(n, MAX), right(n, MIN);
        // for each i, finding min on it's left, not including it
        for(int i=1; i<=n-2; i++){
            left[i] = min(left[i-1], nums[i-1]);
        }
        // for each i, finding max on it's right, not including it
        for(int j=n-2; j>=1; j--){
            right[j] = max(right[j+1], nums[j+1]);
        }
        for(int i=1; i<=n-2; i++){
            if(left[i]<nums[i] && nums[i]<right[i]) return true;
        }
        return false;        
    }
};