class Solution {
public:
    int count(int target,vector<vector<int>>& matrix){
        int i=matrix.size()-1;
        int j=0;
        int cnt=0;
        while(i>=0 && j<matrix.size()){
            if(matrix[i][j]>target){
                i--;
            }else{
                cnt+=(i+1);
                j++;
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int l = matrix[0][0];
        int r = matrix[n-1][n-1];
        while(l<r){
            int mid = l+(r-l)/2;
            int elem = count(mid,matrix);
            if(elem<k)l = mid+1;
            else r = mid;
        }
        return l;
    }
};