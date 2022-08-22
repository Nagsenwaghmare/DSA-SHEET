class Solution {
public:
    vector<long long> maximumEvenSplit(long long n) {
        if(n%2)return{};
        if(n==4)return{4};
        vector<long long>res;
        long long k =2;
        set<long long>s;
        s.insert(2);
        res.push_back(2);
        n=n;
        long long r = n;
        long long sum=k;
        while(n!=0 && k<n){
            if(s.find(n-(k))==s.end()){
                res.push_back(k+2);
                s.insert(k+2);
                k+=2;
                sum+=k;
                n=n-k;
                if(s.find(r-sum)!=s.end()){
                    long long last = res[res.size()-1];
                    sum=sum-last;
                    res.pop_back();
                    res.push_back(r-sum);
                    break;
                }
            }else{
                res.push_back(r-sum);
                break;
            }
        }
        return res;
    }
};