class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int>s;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s.insert(matrix[i][j]);
            }
        }
        return s.find(target)!=s.end();
    }
};