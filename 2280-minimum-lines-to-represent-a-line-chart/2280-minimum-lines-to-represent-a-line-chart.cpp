class Solution {
public:
    int minimumLines(vector<vector<int>>& k) {
        sort(k.begin(),k.end());
        int n = k.size();
        if(n==1)return 0;
        int cnt =1;
        for(int i=2;i<n;i++){
            long x1 = k[i][0];
            long x2 = k[i-1][0];
            long x3 = k[i-2][0];
            long y1 = k[i][1];
            long y2 = k[i-1][1];
            long y3 = k[i-2][1];
            long diff1 = (y3-y2)*(x2-x1);
            long diff2 = (y2-y1)*(x3-x2);
            if(diff1!=diff2){
                cnt++;
            }
        }
        return cnt;
    }
};