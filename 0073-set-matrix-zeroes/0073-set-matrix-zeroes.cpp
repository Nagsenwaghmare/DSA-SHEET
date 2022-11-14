class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row,col;
        int m =matrix.size();
        int n =matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((row.find(i)!=row.end()|| col.find(j)!=col.end() )){
                    matrix[i][j] = 0;
                }
            }
        }
        // return matrix;
    }
};