class Solution {
public:
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder) {
        int n = inorder.size();
        for (int i = 0; i < n; ++i) mapVal2Idx[inorder[i]] = i;
        return dfs(0, n - 1, preorder);
    }

private:
    unordered_map<int, int> mapVal2Idx;
    int preIdx = 0;
    TreeNode* dfs(int left, int right, vector<int> &preorder) {
        if (left > right) return nullptr;
        TreeNode *root = new TreeNode(preorder[preIdx++]);
        int mid = mapVal2Idx[root->val];
        root->left = dfs(left, mid - 1, preorder);
        root->right = dfs(mid + 1, right, preorder);
        return root;
    }
};