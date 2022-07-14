class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt =0;
        while(n){
           int k = n&1;
            cnt+=k;
            n=n>>1;
        }
        return cnt;
    }
};