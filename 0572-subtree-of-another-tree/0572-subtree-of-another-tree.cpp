
class Solution {
public:
    bool issametree(TreeNode *root,TreeNode * subRoot){
        if(root==nullptr && subRoot!=nullptr)return false;
        if(root!=nullptr && subRoot==nullptr)return false;
        if(root==nullptr && subRoot==nullptr)return true;
        return (root->val==subRoot->val)&& issametree(root->left,subRoot->left)&& issametree(root->right,subRoot->right);

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr && subRoot!=nullptr)return false;
        if(root==nullptr && subRoot==nullptr)return true;
        if(issametree(root,subRoot))return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};