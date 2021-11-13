// Once Bob needed to find the second order statistics of a sequence of integer numbers.
//  Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. 
// In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    if(s.size()>=2){
        auto it = s.begin();
        it++;
        cout<<*it;
    }else{
        cout<<"NO"<<'\n';
    }
}