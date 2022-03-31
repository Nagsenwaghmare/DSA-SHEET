class Solution {
public:
    bool ispossible(vector<int>&a,int mid,int k){
        int subcount = 1;
        int sum = 0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(sum>mid){
                subcount++;
                sum = a[i];
            }
        }
        return subcount<=k;
    }
    int shipWithinDays(vector<int>& a, int k) {
        int sum =0;
        int maxi =0;
        for(auto i:a){
            sum+=i;
            maxi = max(maxi,i);
        }
        int low = maxi;
        int high = sum;
        int ans = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(ispossible(a,mid,k)){
                ans = mid;
                high =mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};