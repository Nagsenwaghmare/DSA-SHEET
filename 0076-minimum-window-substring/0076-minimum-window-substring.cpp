class Solution {
public:
    string minWindow(string s, string t) {
        int cnt = t.length();
        int n = s.length();
        unordered_map<char,int> ump;
        int mini = 1000000;
        for(auto it : t) ump[it]++;
        
        //using sliding window - left and right;
        int left = 0;
        int right = 0;
        int start = -1;
        
        //sliding the right till the condition is not satisfied
        while(right < n){
            if(ump[s[right]] > 0 ) cnt--;
            ump[s[right++]]--;
            
            while( cnt == 0){

                if(mini > right - left){
                    mini = right-left;// not adding extra 1 because right is already
                    start = left;// been increased
                }
                ump[s[left]]++;
                if(ump[s[left]]>0) cnt++;
                left++;
            }
        }
        if(start == -1) return "";
        return s.substr(start,mini);
    }
};