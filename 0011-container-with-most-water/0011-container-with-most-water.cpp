class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int l=0;
        int r = n-1;
        int ans= INT_MIN;
        while(l<=r){
            int width = r-l;
            int height = min(a[l],a[r]);
            ans = max(ans,height*width);
            if(a[l]==a[r]){
                l++;
                r--;
            }else if(a[l]>a[r]){
                r--;
            }else if(a[l]<a[r]){
                l++;
            }
        }
        return ans;
    }
};