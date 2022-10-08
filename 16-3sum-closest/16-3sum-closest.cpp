class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == target)
                    return sum;
                else if(sum<target){
                    if(abs(sum-target)<(abs(closest-target))){
                        closest = sum;
                    }
                    l++;
                }else{
                    if(abs(sum-target)<(abs(closest-target))){
                        closest = sum;
                    }
                    r--;
                }
            }
        }
        return closest;
    }
};