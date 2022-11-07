class Solution {
public:
    int maximum69Number (int num) {
        vector<int>res;
        while(num!=0){
            res.push_back(num%10);
            num/=10;
        }
        int n = res.size();
        int k=0;
        for(int i=n-1;i>=0;i--){
            if(res[i]==6){
                res[i]=9;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            k+=res[i];
            k*=10;
        }
        
        return k/10;
    }
};