class Solution {
public:
    bool isPossible(vector<int>& a) {
        map<int,int>left,end;
        for(auto i:a){
            left[i]++;
        }
        for(auto i:a){
            if(left[i]==0)continue;
            left[i]--;
            if(end[i-1]>0){
                end[i-1]--;
                end[i]++;
                
            }else if(left[i+1]>0 && left[i+2]>0){
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                left[i+1]--;
                left[i+2]--;
                end[i+2]++;
            }else{
                return false;
            }
        }
        return true;
    }
};