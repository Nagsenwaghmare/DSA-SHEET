

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        string st = to_string(x);
        string s  = "";
        for(int j=st.length()-1;j>=0;j--){
            s+=st[j];
        }
        return s==st;
    }