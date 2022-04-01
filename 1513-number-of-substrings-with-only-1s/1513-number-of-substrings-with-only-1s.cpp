class Solution {
public:
    const unsigned int M = 1000000007;
    int numSub(string s) {
        long res = 0;
        int j=0;
        for(long i=0;i<=s.size();i++){
            if(i==s.size() ||s[i]=='0'){
                res+= (((i-j)*(i-j+1))/2)%M;
                j=i+1;
            }
        }
        return res;
    }
};