class Solution {
public:
    long long smallestNumber(long long nu) {
        if(nu==0)return 0;
        string num = to_string(nu);
        if(nu<0){
            sort(num.begin(),num.end(),greater<int>());
        }else{
            sort(num.begin(),num.end());
            swap(num[0],num[num.find_first_not_of('0')]);
        }
        return nu<0?-stoll(num):stoll(num);
    }
};