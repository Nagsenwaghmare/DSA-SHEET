class Solution {
public:
    bool ispossible(vector<int>& nums, int m,int mid){
        int count =1;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                count++;
                sum = nums[i];
            }
        }
        return count<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int maxi =0;
        int sum  =0;
        for(auto i:nums){
            maxi = max(maxi,i);
            sum+=i;
        }
        int l = maxi;
        int r = sum;
        int ans =0;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(ispossible(nums,m,mid)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};