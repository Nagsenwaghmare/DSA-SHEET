
#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string S) {
        
        int n=S.size();
        if(!n)  return "";
        
        vector<int> count(26,0);
        for(auto ch : S)
            count[ch-'a']++;
        
        char ch_max = getMaxCountChar(count);
        int maxCount = count[ch_max-'a'];
        
        //check if the result is possible or not
        if(maxCount > (n+1)/2)
            return "";
        
        string res(n,' ');
        
        int ind=0;
        //filling the most frequently occuring char in the even indices
        while(maxCount)
        {
            res[ind] = ch_max;
            ind = ind+2;
            maxCount--;
        }
        count[ch_max-'a'] = 0;
        
        //now filling the other Chars, first filling the even positions and then the odd positions
        for(int i=0; i<26; i++)
        {
            while(count[i] > 0)
            {
                ind = (ind>=n) ? 1 : ind;
                res[ind] = 'a'+i;
                ind += 2;
                count[i]--;
            }
        }
        return res;
    }
    
    char getMaxCountChar(const vector<int>& count)
    {
        int max=0; char ch;
        for(int i=0;i<26;i++)
        {
            if(count[i] > max)
            {
                max = count[i];
                ch = 'a'+i;
            }
        }
        
        return ch;
    }