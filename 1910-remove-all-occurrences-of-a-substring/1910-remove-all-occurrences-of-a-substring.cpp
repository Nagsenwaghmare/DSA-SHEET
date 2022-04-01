class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if((i+part.size()-1)<s.size() && s.substr(i,part.size())==part){
                s.erase(i,part.size());
                i=-1;
            }
        }
        return s;
    }
};