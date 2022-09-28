class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int lo = 1;
        int hi = maxSum;
        int l = index; // no of empty spaces to fill on left
        int r = n-index-1;// no of empty spaces to fill on right
        long res=0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            long sum=0;
            long ls=0,rs=0;
            long m = mid-1;
            if(r<=m)
                rs = (m*(m+1))/2-((m-r)*(m-r+1))/2;
            else
                rs = (m*(m+1))/2+(r-m);
            if(l<=m)
                ls = (m*(m+1))/2-((m-l)*(m-l+1))/2;
            else
                ls = (m*(m+1))/2+(l-m);
            sum = ls+rs+mid;
            
            if(sum<=maxSum){
                res = mid;
                lo = mid+1;
            }else
                hi=mid-1;
        }
        return res;
    }
};