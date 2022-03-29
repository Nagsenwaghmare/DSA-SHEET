class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int r = nums.size()-1;
        
        // in this solution we are using binary search where we gonna count the number of elements which
        // are greater than the middle element if count of those is greater than mid then our repeated 
        // element lies in the left side 
        while(l<r){
            int mid = l+(r-l)/2;
            int cnt=0;
            for(auto k:nums){
                if(k<=mid)cnt++;
            }
            if(cnt>mid)r = mid;
            else l = mid+1;
        }
        return l;
    }
};