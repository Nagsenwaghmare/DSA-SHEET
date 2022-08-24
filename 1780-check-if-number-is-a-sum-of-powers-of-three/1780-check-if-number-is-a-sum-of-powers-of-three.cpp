class Solution {
public:
    int power(int n){
        int cnt=0;
        while(n!=0){
            n/=3;
            cnt++;
        }
        return cnt-1;
    }
    set<int>s;
    bool checkPowersOfThree(int n) {
        int p = power(n);
        int k = n;
        while(p>0 && n>0){
            if(pow(3,p)<=n){
                // cout<<p<<" ";
                n=n-pow(3,p--);
                
            }
            else p--;
        }
        return n==0 ||n==1;
    }
};