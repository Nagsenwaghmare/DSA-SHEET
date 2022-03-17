#include <bits/stdc++.h>
using namespace std;
bool issafe(string s,int i,int l){
    if(l!=0 && s[l-1]=='A' && s[i]=='B') return false;
    if(l+1==s.size()-1 && s[l]=='B' &&s[i]=='A')return false;
    return true;
}
void permute(string s,int l){
    if(l==s.size()-1){
        cout<<s<<"\n";
        return ;
    }else{
        for(int i=l;i<s.size();i++){
            if(issafe(s,i,l)){
            swap(s[i],s[l]);
            permute(s,l+1);
            swap(s[i],s[l]);
            }
        }
    }
}
int main(){
    string s;
    cin>>s;
    permute(s,0);


}
// in this solution we found all the permutations where we have AB as substring 