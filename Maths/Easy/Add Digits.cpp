#include <bits/stdc++.h>
using namespace std;


int addDigits(int num) {
        long long int sum = 0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        if(sum<=9 && sum>=0){
            return sum;
        }else{
            return addDigits(sum);
        }
        return 0;
    }


    int addDigits(int n) {
        if(n==0)return 0;
        if(n%9==0)return 9;
        return (n%9);
    }