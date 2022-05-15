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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int>temp;
            for(int i=0;i<count;i++){
                TreeNode * curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(temp);
        }
        int n = res.size();
        int sum=0;
        for(int i=0;i<res[n-1].size();i++){
            sum+=res[n-1][i];
        }
        return sum;
    }
};