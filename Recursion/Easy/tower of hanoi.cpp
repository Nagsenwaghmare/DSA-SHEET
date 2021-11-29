#include <bits/stdc++.h>
using namespace std;


void tow_of_hanoi(int n,char src,char dest,char mid){
    tow_of_hanoi(n-1,src,mid,dest);
    cout<<src<<" "<<dest<<endl;
    tow_of_hanoi(n-1,mid,dest,src);
}

int main(){
    int n;
    cin>>n;
    tow_of_hanoi(n,'A','B','C');
}