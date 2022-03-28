class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0;
        int r = n-1;
        int start = 0;
        while(l<r){
            int mid  = l+(r-l)/2;
            if(nums[mid]>nums[r]) l = mid+1;
            else r = mid;
        }
        start = l;
        l =0;
        r = n-1;
        if(target>=nums[start] && target<=nums[r]){
            l = start;
        }else{
            r = start;
        }
        while(l<=r){
            int mid= l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};