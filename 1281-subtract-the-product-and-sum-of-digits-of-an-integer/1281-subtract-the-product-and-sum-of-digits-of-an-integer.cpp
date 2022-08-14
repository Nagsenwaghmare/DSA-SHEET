class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = n;
        long long sum =n;
        long long p=1;
        long long s =0;
        while(prod!=0){
            p*=prod%10;
            prod/=10;
        }
        while(sum!=0){
            s+=sum%10;
            sum/=10;
        }
        return p-s;
    }
};