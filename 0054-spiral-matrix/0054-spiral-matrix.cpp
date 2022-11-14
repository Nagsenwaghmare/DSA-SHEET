class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = n-1;
        int top =0;
        int bottom = m-1;
        int direction =0;
        while(left<=right && top<=bottom){
            if(direction==0){
                for(int i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }else if(direction==1){
                for(int i=top;i<=bottom;i++){
                    res.push_back(matrix[i][right]);
                }
                right--;
            }else if(direction==2){
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                    
                }
                bottom--;
            }else if(direction==3){
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            direction = (direction+1)%4;
        }
        return res;
    }
};