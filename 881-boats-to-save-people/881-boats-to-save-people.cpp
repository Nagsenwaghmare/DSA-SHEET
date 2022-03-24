class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        sort(a.begin(),a.end());
        int n = a.size();
        int l =0;
        int r = n-1;
        int cnt =0;
        while(l<=r){
            if(a[l]+a[r]<=limit){
                cnt++;
                l++;
                r--;
            }else{
                cnt++;
                r--;
            }
        }
        return cnt;
    }
};