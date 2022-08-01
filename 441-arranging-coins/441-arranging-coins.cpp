class Solution {
public:
    int arrangeCoins(int n) {
        int rows=0;
        int sum=0;
        int j=1;
        while(n>=j){
            n=n-j;
            j++;
            rows++;
        }
        return rows;
    }
};