class Solution {
public:
    bool ispal(string &s, int i, int j) {
    while (i < j)
        if (s[i++] != s[j--])
            return false;
    return true;
}
    bool checkPartitioning(string s) {
        int n = s.size();
        for(int i=2;i<n;i++){
            if(ispal(s,i,n-1)){
                for(int j=1;j<i;j++){
                if(ispal(s,0,j-1) && ispal(s,j,i-1))return true;       
                }
            }
        }
        return false;
    }
};