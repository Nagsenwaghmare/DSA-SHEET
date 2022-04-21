class Solution {
public:
    int t[2001][2001];
  
bool isPalindrome(string &s,int i,int j){
  
    
    if(i==j){
        return true;
    }
    if(i>j){
        return true;
    }
    
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
        
    }
    return true;
}


int solve(string &s,int i,int j)
{
    if(i>=j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    
   if(isPalindrome(s,i,j)==true){
       t[i][j]=0;
        return 0;
    }
 
  
       int  Min=INT_MAX;
    for(int k=i;k<j;k++){
      
            if(isPalindrome(s,i,k)){
                int temp=1+solve(s,k+1,j);
               Min=min(temp,Min);
            }
   
}
    return t[i][j]=Min;
}

int minCut(string s) {
    
    int i=0;
    int j=s.size()-1;
      memset(t, -1, sizeof(t));
   return solve(s,i,j);
}
};