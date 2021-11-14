
#include <bits/stdc++.h>
using namespace std;


//codefordes-question - https://codeforces.com/problemset/problem/4/C



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(m.find(temp)==m.end()){
            cout<<"OK"<<'\n';
            m[temp]++;
        }else{
            cout<<temp+to_string(m[temp]++)<<'\n';
        }
    }
}

