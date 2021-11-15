#include<bits/stdc++.h>
using namespace std;



bool isAnagram(string s, string t) {
        string fake1 = s;
        sort(fake1.begin(),fake1.end());
        string fake2 = t;
        sort(fake2.begin(),fake2.end());
        return fake1==fake2;
    }