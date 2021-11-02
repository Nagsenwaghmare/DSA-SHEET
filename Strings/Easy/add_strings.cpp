

#include<bits/stdc++.h>
using namespace std;

// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.


string addStrings(string s1, string s2) {
        string s = "";
        int i,j;
        i = s1.length()-1;
        j = s2.length()-1;
        int carry = 0 ;
        while(i>=0 || j>=0){
            if(i>=0)carry+=s1[i--]-'0';
            if(j>=0)carry+=s2[j--]-'0';
            s = to_string(carry%10)+s;
            carry/=10;
        }
        return carry?'1'+s:s;
    }