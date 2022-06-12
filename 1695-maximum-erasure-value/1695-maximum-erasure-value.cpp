class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int>s;
        int i=0;
        int j=0;
        int sum =0;
        int ans=INT_MIN;
        int n =nums.size();
        while(i<n && j<n){
            if(s.find(nums[j])==s.end()){
                sum+=nums[j];
                s.insert(nums[j]);
                ans = max(ans,sum);
                j++;
                
            }else{
                s.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
        }
        return ans;
    }
};