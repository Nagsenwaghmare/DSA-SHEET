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
    void help(TreeNode * root,vector<int> temp,vector<vector<int>>&res){
        if(!root)return;
        temp.push_back(root->val);
        if(root->left==nullptr && root->right== nullptr){
            res.push_back(temp);
            return ;
        }
        help(root->left,temp,res);
        help(root->right,temp,res);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>temp;
        help(root,temp,res);
        for(auto i:res){
            int sum=0;
            for(auto j:i){
                cout<<j<<" ";
                sum+=j;
            }
            cout<<"\n";
            if(sum==targetSum)return true;
        }
        return false;
    }
};