class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum =INT_MIN;
        int currsum =0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum<0)currsum=0;
            maxsum = max(maxsum,currsum);
        }
        int minsum =INT_MAX;
        currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum>0)currsum=0;
            minsum = min(minsum,currsum);
        }
        return max(maxsum,abs(minsum));
    }
};