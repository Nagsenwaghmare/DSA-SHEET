class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        sum  = accumulate(begin(nums),end(nums),sum);
        int leftsum=0;
        int rightsum=sum;
        for(int i=0;i<n;i++){
            rightsum-=nums[i];
            if(leftsum==rightsum)return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};