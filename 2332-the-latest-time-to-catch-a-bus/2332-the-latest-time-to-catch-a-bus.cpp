class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& b, vector<int>& p, int c) {
        int n = b.size();
        int m = p.size();
        sort(b.begin(),b.end());
        sort(p.begin(), p.end());
        unordered_map<int,int> mpp;
        for(auto it: p){
            mpp[it]++;
        }
        int i = 0;
        int j = 0;
        int count = 0;
        int lastPassenger = -1;
        while(i<n){
            count = 0;
            while(j<m and p[j]<=b[i] and count<c){
                lastPassenger = p[j];
                count++;
                j++;
            }
            i++;
        }
        int val = 0;
        if(lastPassenger==-1){
            val = b[n-1];
        }
        else if(count==c){
            val = lastPassenger;
        }
        else{
            val = b[n-1];
        }
        while(val>=0){
            if(mpp.find(val)==mpp.end()){
                return val;
            }
            val--;
        }
        return -1;
    }
};