class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currsum = 0;
        int maxsum =INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum<0){
                currsum=0;
            }
            maxsum = max(maxsum,currsum);
        }
        currsum = 0;
        int minsum =INT_MAX;
        // int n = nums.size();
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum>0){
                currsum=0;
            }
            minsum = min(minsum,currsum);
        }
        return max(maxsum,abs(minsum));
    }
};