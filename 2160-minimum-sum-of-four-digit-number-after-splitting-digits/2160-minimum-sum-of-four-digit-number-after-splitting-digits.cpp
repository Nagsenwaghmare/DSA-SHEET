class Solution {
public:
    int minimumSum(int num) {
        vector<int>res;
        while(num!=0){
            res.push_back(num%10);
            num/=10;
        }
        sort(res.begin(),res.end());
        int num1 = res[0]*10+res[3];
        int num2 = res[1]*10+res[2];
        return num1+num2;
    }
};