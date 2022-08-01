class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long  n = nums.size();
        long long  l =0;
        long long r ;
        long long maxi =  0;
        long long sum=0;
        sort(nums.begin(),nums.end());
        for(r=0;r<n;r++){
            sum+=nums[r];
            while((long long)(nums[r]*(r-l+1))-sum>k){
                sum-=nums[l];
                l++;
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;
    }
};