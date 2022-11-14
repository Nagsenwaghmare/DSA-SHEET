class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        bool row = false;
        bool col = false;
        int m = a.size();
        int n = a[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    if(i==0)row=true;
                    if(j==0)col=true;
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(a[i][j]==0){
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(a[i][0]==0 || a[0][j]==0){
                    a[i][j]=0;
                }
            }
        }
        if(row){
            for(int i=0;i<n;i++){
                a[0][i]=0;
            }
        }
        
        if(col){
            for(int i=0;i<m;i++){
                a[i][0]=0;
            }
        }
    }
};