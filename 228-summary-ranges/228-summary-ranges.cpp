class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        vector<string>res;
        if(a.empty()){
            return res;
        };
        int start = a[0];
        int end = a[0];
        int n = a.size();
        for(int i=1;i<n;i++){
            long long int m = a[i];
            long long int n= a[i-1];  
            if(m-n>1 && i==1){
                res.push_back(to_string(a[i-1]));
                start = end  = a[i];
            }else if(m-n==1){
                end = a[i];
            }else if(m-n>1 && i!=1){
                if(start==end){
                    res.push_back(to_string(start));
                }else{
                    res.push_back(to_string(start)+"->"+to_string(end));    
                }
                start = end  = a[i];
            }
        }
        if(start==end){
            res.push_back(to_string(start));
        }else{
            res.push_back(to_string(start)+"->"+to_string(end));    
        }
        return res;
    }
};