class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unsigned int M = 1e9+7;
        vector<long long>count(101);
        long long  res =0;
        for(auto i:arr){
            count[i]++;
        }
        for(int i=0;i<101;i++){
            for(int j=i;j<101;j++){
                int k = target-i-j;
                if(k<0 ||k>100)continue;
                if(i==j &&j==k){
                    res+=count[i]*(count[i]-1)*(count[i]-2)/6;
                }else if(i==j &&j!=k){
                    res+=((count[i]*(count[i]-1))/2)*count[k];
                }else if(i<j &&j<k){
                    res+=(count[i]*count[j]*count[k]);
                }
                res=res%M;
            }
        }
        return (int)res;
    }
};