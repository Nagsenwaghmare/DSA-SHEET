class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k  = 1;
        int top =0;
        int bottom = n-1;
        int left =0;
        int right = n-1;
        int direction =0;
        vector<vector<int>>res(n,vector<int>(n,0));
        while(top<=bottom && left<=right ){
            if(direction==0){
                for(int i=left;i<=right;i++){
                res[top][i] = k;
                k++;
            }
            top++;
            }else if(direction==1){
                for(int i=top;i<=bottom;i++){
                res[i][right] = k;
                k++;
            }
            right--;
            }else if(direction==2){
                for(int i=right;i>=left;i--){
                res[bottom][i] = k;
                k++;
            }
            bottom--;
            }else if(direction==3){
                for(int i=bottom;i>=top;i--){
                res[i][left] = k;
                k++;
            }
            left++;
            }
            direction = (direction+1)%4;
        }
        return res;
    }
};