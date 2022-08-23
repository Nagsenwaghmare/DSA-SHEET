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
class Info{
    public:
    bool isbst;
    int ms;
    int maxi;
    int mini;
    Info(){
        ms =0;
        mini   = INT_MAX;
        maxi  = INT_MIN;
        isbst = true;
    }
};
class Solution {
public:
    int ans=0;
    Info solve(TreeNode * root){
        if(root==nullptr)return Info();
        Info node;
        Info nodeleft = solve(root->left);
        Info noderight = solve(root->right);
        if(nodeleft.isbst && noderight.isbst && root->val>nodeleft.maxi && root->val <noderight.mini){
            node.isbst = true;
            node.ms = root->val+nodeleft.ms+noderight.ms;
            node.mini = min(root->val,nodeleft.mini);
            node.maxi = max(root->val,noderight.maxi);
        }else{
            node.isbst = false;
            node.ms = max(nodeleft.ms,noderight.ms);
        }
        ans=max(ans,node.ms);
        return node;
        
    }
    int maxSumBST(TreeNode* root) {
        solve(root);
        return ans;
    }
};