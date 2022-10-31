class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
     int m= matrix.size();
     int n= matrix[0].size();
     if( m==1 || n==1 )return true;
       int i =1;
       int j=1;
       for( i=1;i<m;i++){
           for(j=1;j<n;j++){
           if(matrix[i-1][j-1]!=matrix[i][j])
           return false;
           }
       }
       return true;
    }
};