#include <bits/stdc++.h>
using namespace std;





bool backspaceCompare(string s, string t) {
        stack <int> s1;
        stack <int> s2 ;
        string str1 ;
        string str2 ;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }else if(!s1.empty() && s[i]=='#'){
                    s1.pop();
                }
            }
        
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            }else if(!s2.empty() && t[i]=='#'){
                    s2.pop();
                }
            }
        while(!s1.empty()){
            str1.push_back(s1.top());
            s1.pop();
        }
        while(!s2.empty()){
            str2.push_back(s2.top());
            s2.pop();
        }
        return str1==str2;
    }



//     Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.