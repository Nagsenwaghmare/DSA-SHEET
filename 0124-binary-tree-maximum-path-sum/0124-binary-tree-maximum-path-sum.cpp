
class Solution {
public:
    int ans = INT_MIN;
    int helper(TreeNode *root){
        if(!root)return 0;
        int left = max(0, helper(root->left));
        int right = max(0,helper(root->right));
        ans = max(ans,left+right+root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        helper(root);
        return ans;
    }
};