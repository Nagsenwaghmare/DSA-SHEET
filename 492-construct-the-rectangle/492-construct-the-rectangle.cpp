class Solution {
public:
    bool isprime(int n){
        if(n<=1)return false;
        for(int i=2;i<n;i++){
            if(n%i==0)return false;
        }
        return true;
    }

    vector<int> constructRectangle(int area) { 
        int n = sqrt(area);
        while(area%n){
            n--;
        }
        return {area/n,n};
    }
};