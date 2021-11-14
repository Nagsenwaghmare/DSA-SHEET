    
   #include<bits/stdc++.h>
   using namespace std; 
    
    
class Solution {
public:
    string t;
    int count,maxx;
    void fun(string &s, int &k)
    {  int i=k;
        int n = s.size(), j;
        for( j = i;j<n;j++)
        {
            if(s[j] == s[i]){
               count++;
            }
            else break;
        } 
        i--;
        while(i>= 0 && j <n)
        {
            if(s[i] == s[j]){
                count+=2;i--;j++;}
            else break;
        }
        if(maxx < count){
            maxx = count;
            t = s.substr(i+1, count);
        }
    }
    string longestPalindrome(string s) {
        maxx=0;
        t="";
        for(int i = 0;i<s.size();i++)
        {
            count=0;  
            fun(s, i);
        }
       
        return t;
    }
};