class Solution {
public:
    int solve(vector<int>& a,int n){
        for(int i=0;i<a.size();i++){
            if(a[i]==n)return i+1;
        }
        return -1;
    }
    vector<int> pancakeSort(vector<int>& a) {
        int n = a.size();
        vector<int>res;
        while(n){
            if(a[n-1]!=n){
                int k = solve(a,n);
                reverse(a.begin(),a.begin()+k);
                res.push_back(k);
                reverse(a.begin(),a.begin()+n);
                res.push_back(n);
            }
            
            n--;
        }
        return res;
    }
};