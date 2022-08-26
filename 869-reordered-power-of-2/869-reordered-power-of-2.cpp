class Solution {
public:
    
    bool reorderedPowerOf2(int n) {
        vector<int>v(10,0);
        while(n>0){
            v[n%10]++;
            n/=10;
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        for(int i=0;i<31;i++){
            vector<int>temp(10,0);
            int k = pow(2,i);
            while(k>0){
                temp[k%10]++;
                k/=10;
            }
            if(temp==v)return true;
        }
        return false;
    }
};