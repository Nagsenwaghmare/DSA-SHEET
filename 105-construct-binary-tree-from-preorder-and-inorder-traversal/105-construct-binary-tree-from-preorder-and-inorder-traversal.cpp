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
    map<int,int>mp;
    int preidx=0;
    TreeNode* constructtree(int left,int right,vector<int>& preorder){
        if(left>right)return NULL;
        TreeNode * root = new TreeNode(preorder[preidx++]);
        int mid = mp[root->val];
        root->left = constructtree(left,mid-1,preorder);
        root->right = constructtree(mid+1,right,preorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return constructtree(0,n-1,preorder);
    }
};