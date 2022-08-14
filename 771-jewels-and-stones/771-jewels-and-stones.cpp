class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum=0;
        map<char,int>mp;
        for(auto i:stones){
            mp[i]++;
        }
        for(auto i:jewels){
            if(mp.find(i)!=mp.end()){
                sum+=mp[i];
            }
            else{
                sum+=0;
            }
        }
        return sum;
    }
};