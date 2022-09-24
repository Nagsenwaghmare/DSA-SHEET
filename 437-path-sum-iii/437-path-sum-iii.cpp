
class Solution {
public:
    
    void pathsum(TreeNode * root,int &cnt,vector<int>temp,int k){
        if(!root)return;
        temp.push_back(root->val);
        pathsum(root->left,cnt,temp,k);
        pathsum(root->right,cnt,temp,k);
            long long sum=0;
            for(int i=temp.size()-1;i>=0;i--){
                sum+=temp[i];
                if(sum==k)cnt++;
            }
        temp.pop_back();
        
    }
    int pathSum(TreeNode* root, int k) {
        vector<vector<int>>res;
        if(!root)return 0;
        vector<int>temp;
        int cnt=0;
        pathsum(root,cnt,temp,k);
        return cnt;
    }
};