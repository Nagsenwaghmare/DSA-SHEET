class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        int r = n-1;
        int start =0;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        start = l;
        return nums[start];
    }
};