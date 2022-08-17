class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i=0;
        int j=1;
        int n =nums.size();
        int len = 1;
        int maxlen = 1;
        while(j<n){
            if(nums[j]>nums[i]){
                j++;
                i++;
                len++;
                maxlen = max(maxlen,len);
            }else{
                
                len=1;
                i=j;
                j++;
            }
        }
        return maxlen;
    }
};