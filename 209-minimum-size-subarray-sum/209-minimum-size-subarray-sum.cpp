class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) {
        int i=0;
        int j=0;
        int ans  = INT_MAX;
        int sum =0;
        while(i<a.size()){
            sum+=a[i++];
            while(sum>=k){
                ans = min(ans,i-j);
                sum-=a[j];
                j++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};