class Solution {
public:
    long long sumScores(string s) {
        long long sum =0;
        // reverse(s.begin(),s.end());
        int n = s.size();
        vector<int>lps(n);
        lps[0] = 0;
        int len =0;
        int i=1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i] =len;
                i++;
            }else{
                if(len==0){
                    lps[i] = len;
                    i++;
                }else{
                    len = lps[len-1];
                }
            }
        }
        vector<int> cnt;
        for (int j :  lps)
            cnt.push_back(j == 0 ? 0 : cnt[j - 1] + 1);   
    return accumulate(begin(cnt), end(cnt), 0LL) + s.size();
        return sum;
    }
};