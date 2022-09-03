class Solution {
public:
    int maximumRobots(vector<int>& c, vector<int>& r, long long budget) {
        long long  i=0;
        long long sum=0;
        long long n = c.size();
        multiset<long long,greater<long long>>set;
        for(int j=0;j<c.size();j++){
            sum+=r[j];
            set.insert(c[j]);
            if((long long)*begin(set)+(j-i+1)*sum>budget){
                sum-=r[i];
                set.erase(set.find(c[i++]));
            }
        }
        return n-i;
    }
};