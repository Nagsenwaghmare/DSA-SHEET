// class Solution {
// public:
//     vector<string> removeSubfolders(vector<string>& folder) {
//         //sort by alphabetical order
//         sort(folder.begin(),folder.end());
        
//         //find the root folders        
//         vector<string> ret;
//         ret.push_back(folder[0]);
//         for(int i=1;i<folder.size();i++){
//             string root=ret[ret.size()-1]+"/";
//             if(folder[i].substr(0,root.size())!=root){
//                 ret.push_back(folder[i]);
//             }
//         }
 
//         return ret;
//     }
// };
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>res;
        sort(folder.begin(),folder.end());
        res.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
                string str = res[res.size()-1];
                str+="/";
                int n = str.size();
                if(folder[i].substr(0,n)!=str){
                    res.push_back(folder[i]);             
                }
        }
        return res;
    }
};