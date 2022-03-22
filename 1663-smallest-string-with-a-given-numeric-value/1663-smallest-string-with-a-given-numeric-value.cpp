class Solution {
public:
    string getSmallestString(int n, int k) {
        string result = string(n,'a');
        k-=n;
        while(k>0){
            result[--n]='a'+min(25,k);
            k-=min(25,k);
        }
        return result;
    }
};