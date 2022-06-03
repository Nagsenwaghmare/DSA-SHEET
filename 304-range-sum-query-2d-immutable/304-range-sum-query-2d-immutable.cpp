class NumMatrix {
public:
    vector<vector<int>> res;
    NumMatrix(vector<vector<int>>& matrix) {
        res = matrix;
        int m = res.size();
        int n = res[0].size();
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                res[i][j] +=res[i][j-1]; 
            }
        }
        
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long sum =0;
        // for(int i=0;i<res.size();i++){
        //     for(int j=0;j<res[0].size();j++){
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        for(int i=row1;i<=row2;i++){
                if(col1==0){
                    sum+=res[i][col2];
                }else{
                    sum+=res[i][col2]-res[i][col1-1];
                }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */