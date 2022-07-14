class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result=0;
        for(int i=0;i<32;i++){
            int lsb=n&1;  //to calculate whether the left bit is 1 or 0
            int reverselsb=lsb<<(31-i);//to reverse the the generated lsb
            result=result|reverselsb;//to set the value in the result
            n= n>>1;    // shift right n to get new lsb every time
            
        }
        return result;
    }
};