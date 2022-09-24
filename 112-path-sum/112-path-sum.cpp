/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void pathsum(TreeNode * root,vector<vector<int>>&res,vector<int>temp,int k){
        if(!root)return;
        temp.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            res.push_back(temp);
            return;
        }
        pathsum(root->left,res,temp,k);
        pathsum(root->right,res,temp,k);
    }
    bool hasPathSum(TreeNode* root, int k) {
        if(!root)return false;
        vector<int>temp;
        vector<vector<int>>res;
        pathsum(root,res,temp,k);
        for(auto i:res){
            int sum=0;
            sum = accumulate(begin(i),end(i),sum);
            cout<<sum<<" ";
            if(sum==k)return true;
        }
        return false;
    }
};