class Solution {
public:
    int nextGreaterElement(int n) {
        auto str = to_string(n);
        next_permutation(begin(str),end(str));
        auto k = stoll(str);
        if(k>INT_MAX || k<=n)return -1;
        return k;
    }
};