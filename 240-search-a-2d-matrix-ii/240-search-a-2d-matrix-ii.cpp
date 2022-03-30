class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int row = 0;
        int col = n-1;
        while(col>=0 && row<=matrix.size()-1){
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]>target){
                col--;
            }else if(matrix[row][col]<target){
                row++;
            }
        }
        return false;
    }
};