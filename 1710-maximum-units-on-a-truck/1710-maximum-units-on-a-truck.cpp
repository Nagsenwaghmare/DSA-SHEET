class Solution {
public:
    static bool cmp(vector<int>&p1,vector<int>&p2){
        return p1[1]>p2[1];
    } 
    int maximumUnits(vector<vector<int>>& t, int n) {
        sort(t.begin(),t.end(),cmp);
        int maxunits =0;
        for(auto i:t){
            if(i[0]<=n){
                maxunits+=(i[1]*i[0]);
                n=n-i[0];
            }else if(i[0]>n && n!=0){
                maxunits+=(i[1]*n);
                n=n-i[0];
                break;
            }
                
        }
        return maxunits;
    }
};