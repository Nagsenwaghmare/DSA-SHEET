class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 1;
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        int i=0;
        int j=0;
        for(int p=0;p<n;p++){
            if(nums[p]==mini)i=p;
            if(nums[p]==maxi)j=p;
        }
        return min({max(i + 1, j + 1), max(n - i, n - j), i + 1 + n - j, j + 1 + n - i});
    }
};