class Solution {
public:
    int twoEggDrop(int n) {
     int res =0;
        int diff =0;
        while(n>0){
            res++;
            diff++;
            cout<<diff<<" "<<n<<"\n";
            n-=diff;
        }
        return res;
    }
};