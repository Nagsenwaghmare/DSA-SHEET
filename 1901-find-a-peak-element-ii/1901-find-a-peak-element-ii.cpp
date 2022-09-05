class Solution {
public:
    int m,n;
    bool isval(int i,int j){
        if(i<0 || j<0|| i>=m || j>=n)return false;
        return true;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        m = mat.size();
        n = mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bool flag = true;
                if(isval(i+1,j) && flag){
                    if(mat[i+1][j]>mat[i][j])flag=false;
                }
                if(isval(i,j+1) && flag){
                    if(mat[i][j+1]>mat[i][j])flag=false;
                }
                if(isval(i-1,j) && flag){
                    if(mat[i-1][j]>mat[i][j])flag=false;
                }
                if(isval(i,j-1) && flag){
                    if(mat[i][j-1]>mat[i][j])flag=false;
                }
                if(flag)return{i,j};
            }
        }
        return {-1,-1};
    }
};