class Solution {
public:
    
    int decodenum(string &s,int i,vector<int>&memo){
        
        if(s[i]=='0'){
            return memo[i]=0;
        }
        if(memo[i]!=-1){
            return memo[i];
        }else{
        int res=decodenum(s,i+1,memo);
        if(i<s.size()-1 && (s[i]=='1' ||s[i]=='2' && (s[i+1]<'7'))) res+=decodenum(s,i+2,memo);
        return memo[i]=res;
        }
        
    }
    
    
    int numDecodings(string s) {
        vector<int>memo(s.size()+1,-1);
        memo[s.size()] = 1;
        return s.empty()?0:decodenum(s,0,memo);
    }
};