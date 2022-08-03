class Solution {
public:
    int xdif[300][300];
    int ydif[300][300];
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()==1)return 1;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                xdif[i][j]=points[i][0]-points[j][0];
                ydif[i][j]=points[i][1]-points[j][1];
            }
        }
        int mx=0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                int count=2;
                for(int k=j+1;k<points.size();k++){
                    if(xdif[i][j]*(points[k][1]-points[i][1])==ydif[i][j]*(points[k][0]-points[i][0])){
                        count++;
                    }
                }
                mx=max(mx,count);
            }
        }
        
        return mx;
    }
};