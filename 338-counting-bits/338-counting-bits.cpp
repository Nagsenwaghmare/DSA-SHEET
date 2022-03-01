class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1,0);
        for(int i=0;i<res.size();i++){
            res[i] = __builtin_popcountl(i);
        }
        return res;
    }
};