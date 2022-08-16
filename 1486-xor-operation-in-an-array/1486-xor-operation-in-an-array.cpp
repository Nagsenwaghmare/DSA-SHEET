class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>res(n);
        int x=0;
        for(int i=0;i<n;i++){
            res[i] = start+(2*i);
            // cout<<res[i]<<"\n";
            x^=res[i];
        }
        return x;
    }
};