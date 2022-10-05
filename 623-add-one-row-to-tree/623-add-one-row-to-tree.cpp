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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode * temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        queue<TreeNode *>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int n = q.size();
            cnt++;
            for(int i=0;i<n;i++){
                TreeNode * curr = q.front();
                q.pop();
                if(depth-1!=cnt){
                    if(curr->left)q.push(curr->left);
                    if(curr->right)q.push(curr->right);
                }else{
                    TreeNode * temp1 = new TreeNode(val);
                    temp1->left = curr->left;
                    curr->left = temp1;
                     TreeNode * temp2 = new TreeNode(val);
                    temp2->right = curr->right;
                    curr->right = temp2;
                }
            }
        }
        return root;
    }
};