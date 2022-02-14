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
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        if(root==nullptr)return 0;
        if(root->val%2==0){
            if(root->left !=nullptr && root->left->left!=nullptr)sum+=root->left->left->val;
            if(root->left !=nullptr && root->left->right!=nullptr)sum+=root->left->right->val;
            if(root->right !=nullptr && root->right->left!=nullptr)sum+=root->right->left->val;
            if(root->right !=nullptr && root->right->right!=nullptr)sum+=root->right->right->val;
        }
        return sum+ sumEvenGrandparent(root->left)+sumEvenGrandparent(root->right);
    }
};