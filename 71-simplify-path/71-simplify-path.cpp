class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        int n = path.size();
        if(path[n-1]!='/'){
            path+='/';
            n++;
        }
        int i = 1;
        string temp = "";
        string ans = "";
        while(i<n){
            if(path[i]=='/'){
                if(temp=="" ||temp=="."){
                    
                }else if(temp==".."){
                    if(!s.empty())s.pop();
                }
                else{
                s.push(temp);
                }
                temp = "";
            }else{
                temp.push_back(path[i]);
            }
            i++;
            
        }
        stack<string>str;
        ans = "/";
        if(s.empty())return ans;
        while(!s.empty()){
            str.push(s.top());
            s.pop();
        }
        while(!str.empty()){
            ans+=str.top()+"/";
            str.pop();
        }
        return ans.substr(0,ans.length()-1);
        
    }
};