
class Solution {
public:
    void helper(TreeNode * root,vector<int> temp,vector<vector<int>>&res,int k){
        if(root==nullptr)return;
        temp.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            res.push_back(temp);
            return;
        }
        helper(root->left,temp,res,k);
        helper(root->right,temp,res,k);
    }
    bool hasPathSum(TreeNode* root, int k) {
        if(root==nullptr)return false;
        vector<int>temp;
        vector<vector<int>>res;
        helper(root,temp,res,k);
        for(auto i:res){
            int  sum=0;
            for(auto j:i)sum+=j;
            // cout<<sum<<" ";
            if(sum==k)return true;
        }
        return false;
    }
};