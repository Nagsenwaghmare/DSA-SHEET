class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<1) return false;
        else
            return n%4==0 && isPowerOfFour(n/4);
    }
};