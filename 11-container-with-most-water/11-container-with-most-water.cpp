class Solution {
public:
    int maxArea(vector<int>& a) {
        int l =0;
        int n = a.size();
        int r = n-1;
        int ans =INT_MIN;
        while(l<r){
            if(a[l]<a[r]){
                ans = max(ans,(r-l)*min(a[l],a[r]));
                l++;
            }else if(a[l]>a[r]){
                ans = max(ans,(r-l)*min(a[l],a[r]));
                r--;
            }else if(a[l]==a[r]){
                ans = max(ans,(r-l)*min(a[l],a[r]));
                l++;
                r--;
            }
        }
        return ans;
    }
};