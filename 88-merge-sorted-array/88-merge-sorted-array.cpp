class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1;
        int k = nums1.size();
        while(i>=0){
            if(nums1[i]!=0){
                break;
            }
            i--;
        }
        int l=0;
        i++;
        for(int j=m;j<k;j++){
            nums1[j]=nums2[l];
            l++;
        }
        sort(nums1.begin(),nums1.end());
    }
};