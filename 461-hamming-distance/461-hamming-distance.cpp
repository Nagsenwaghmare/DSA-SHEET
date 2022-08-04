class Solution {
public:
    int hammingDistance(int x, int y) {
        string s1 = bitset<32>(x).to_string();
        int cnt=0;
        string s2 =  bitset<32>(y).to_string();
        for(int i=31;i>=0;i--){
            if(s1[i]!=s2[i])cnt++;
        }
        return cnt;
    }
};