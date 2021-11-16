// https://www.spoj.com/problems/MINSTOCK/




#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    set<pair<int,string>>st;
    int ch,x;
    string str;
    for(int i=1;i<=n;i++){
        cin>>ch;
        if(ch==1){
            cin>>str;
            cin>>x;
            m[str]=x;
            st.insert(make_pair(x,str));
        }else if(ch==2){
                cin>>str;
                cin>>x;
                st.erase(st.find(make_pair(m[str],str)));
                m[str] = x;
                st.insert(make_pair(m[str],str));
        }else{
            cin>>str;
            auto it = st.begin();
            cout<<it->second<<" "<<i<<'\n';
        }
    }
}