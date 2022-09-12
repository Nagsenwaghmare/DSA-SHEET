class Solution {
public:
    static bool cmp(int a,int b){
        string s1 = bitset<32>(a).to_string();
        string s2 = bitset<32>(b).to_string();
        int cnt1=0;int cnt2=0;
        for(int i=0;i<32;i++){
            if(s1[i]=='1')cnt1++;
            if(s2[i]=='1')cnt2++;
        }
        if(cnt1==cnt2){
            return a<b;
        }
        return cnt1<cnt2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
        
    }
};