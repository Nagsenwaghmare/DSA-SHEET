class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n==0) return false;
        if(n%3!=0) 
            return false;
        else
            return isPowerOfThree(n/3);
    }
};