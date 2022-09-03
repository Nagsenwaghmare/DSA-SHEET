class Solution {
public:
    void backtrack(int idx,int n,int k,int num,vector<int>&res){
        if(idx==n){
            if(res.size()==0 || res.back()!=num){
                res.push_back(num);   
            }
            return ;
        }
            int rem = num%10;
            if(rem+k<10){
                backtrack(idx+1,n,k,num*10+(rem+k),res);
            }
            if(rem-k>=0){
                backtrack(idx+1,n,k,num*10+(rem-k),res);
            }
        }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        for(int i=1;i<10;i++){
            backtrack(1,n,k,i,res);
        }
        return res;
    }
};