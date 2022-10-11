class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n==3){
            if(nums[0]<nums[1] && nums[1]<nums[2])return true;
            else return false;
        }
        int left[n];
        int right[n];
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            left[i] =min(left[i-1],nums[i]); 
        }
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>left[i] && nums[i]<right[i]){
                return true;
            }
            
        }
        return false;
    }
};