// Given two binary strings a and b, return their sum as a binary string.

#include <bits/stdc++.h>
using namespace std;


string addBinary(string a, string b) {
        int i = a.length()-1;
        string result = "";
        int j = b.length()-1;
        int carry = 0;
        while(i>=0 ||j>=0 || carry){
            if(i>=0 && a[i--]=='1')++carry;
            if(j>=0 && b[j--]=='1')++carry;
            result.insert(0,1,carry%2 == 1 ?'1':'0');
            carry/=2;
        }
        return result;
    }