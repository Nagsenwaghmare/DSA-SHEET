class Solution {
public:
    int reverse(long long n,bool flag){
        long long res  = 0;
        for(n=flag?n/10:n;n>0;n/=10){
            res=res*10+n%10;
        }
        return res;
    }
    vector<long long> kthPalindrome(vector<int>& q, int k) {
        vector<long long>res;
        long long start = pow(10,((k+1)/2)-1);
        long long end = pow(10,(k+1)/2);
        long long mul = pow(10,k/2);
        for(int i=0;i<q.size();i++){
            if(start+q[i]>end){
                res.push_back(-1);
            }else{
                res.push_back((start+q[i]-1)*mul+reverse(start+q[i]-1,k%2));
            }
        }
        return res;
    }
};