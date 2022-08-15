class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int p = points.size();
        int q = queries.size();
        vector<int>res;
        for(int i=0;i<q;i++){
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            int cnt=0;
            for(int j=0;j<p;j++){
                if(((points[j][0]-x)*(points[j][0]-x)+(points[j][1]-y)*(points[j][1]-y))<=r*r){
                    cnt++;
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};