#include <bits/stdc++.h>
using namespace std;

int minMoves(int target, int maxDoubles) {
        int count = 0;
        if(maxDoubles==0) return target-1;
        while(target>1){
            if(target==2) return count+1;
            if(maxDoubles==0) return count+target-1;
            if(target%2==0 && (maxDoubles--)>0){
                target=target/2;
                count++;
            }
            else{
                target=target-1;
                count++;
            }
        }
        return count;
    }