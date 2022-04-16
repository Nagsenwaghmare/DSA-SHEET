class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        vector<pair<int,int>>d = {{-1,1},{0,1},{1,1},{-1,0},{1,0},{-1,-1},{0,-1},{1,-1}};
        int m = b.size();
        int n = b[0].size();
        vector<vector<int>>res=b;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt =0;
                for(auto k:d){
                    int p = k.first+i;
                    int q = k.second+j;
                    if(p>=0 && p<m && q>=0 && q<n && b[p][q]==1){
                        cnt++;
                    }
                }
                if(b[i][j]==1){
                    if(cnt>3 || cnt<2){
                        res[i][j]=0;
                    }else if(cnt==2 ||cnt==3){
                        res[i][j]=1;
                    }
                }else{
                    if(cnt==3){
                        res[i][j]=1;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                b[i][j]=res[i][j];
            }
        }
    }
};