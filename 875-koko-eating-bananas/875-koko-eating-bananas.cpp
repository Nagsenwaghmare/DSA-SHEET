class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 1e9;
        while(l<r){
            int midspeed = (l+r)/2;
            int total=0;
            for(auto i:piles){
                total+=(i+midspeed-1)/midspeed;
            }
            if(total>h){
                l = midspeed+1;
            }else{
                r =midspeed;
            }
        }
        return l;
    }
};