class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> a(n + 1);
        for (auto &v : shifts) {
            int k = v[2] == 1 ? 1 : 25;
            a[v[0]] += k;
            a[v[1] + 1] -= k;
        }
        for (int i = 0 ; i < n ; ++ i) {
            a[i + 1] += a[i];
            s[i] = 'a' + (s[i] - 'a' + a[i]) % 26;
        }
        return s;
        
    }
};