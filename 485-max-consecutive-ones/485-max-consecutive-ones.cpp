class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int i=0;
        int j=0;
        int len =0;
        while(i<n && j<n){
            if(a[i]==1){
                while( i<n && a[i]==1){
                    i++;
                }
                len = max(len,i-j);
                i++;
                j=i;
            }else{
                i++;
                j++;
            }
        }
        return len;
    }
};