class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(begin(nums),end(nums));
        cout<<maxi;
        for(auto i:nums){
            if(i!=maxi && 2*i<=maxi)continue;
            else if(i==maxi)continue;
            else return -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi)return i; 
        }
        return -1;
    }
};