// Andryusha is an orderly boy and likes to keep things in their place.

// Today he faced a problem to put his socks in the wardrobe.
// He has n distinct pairs of socks which are initially in a bag. The pairs are numbered from 1 to n. Andryusha wants to put paired socks together
// and put them in the wardrobe. He takes the socks one by one from the bag, and for each sock he looks whether the pair of this sock has been
// already took out of the bag, or not. If not (that means the pair of this sock is still in the bag), he puts the current socks on the table
// in front of him. Otherwise, he puts both socks from the pair to the wardrobe.
// Andryusha remembers the order in which he took the socks from the bag. Can you tell him what is the maximum number 
// of socks that were on the table at the same time?


#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    int max_pair = -1;
    int count = 0;
    set <int>s;
    for(int i=0;i<2*n;i++){
        if(s.find(a[i])!=s.end()){
            //auto it  = s.find(a[i]);
            s.erase(a[i]);
            count = s.size();
        }else{
            s.insert(a[i]);
            count = s.size();
            max_pair = max(max_pair,count);
        }
    }
    cout<<max_pair<<'\n';
    
    }
