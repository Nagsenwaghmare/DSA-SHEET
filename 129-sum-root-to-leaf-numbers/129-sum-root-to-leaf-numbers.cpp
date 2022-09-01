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
    void helper(TreeNode * root,vector<vector<int>>&res,vector<int>temp){
        if(!root)return;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            res.push_back(temp);
            return;
        }
        helper(root->left,res,temp);
        helper(root->right,res,temp);
    }
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        vector<int>temp;
        vector<vector<int>>res;
        helper(root,res,temp);
        int sum=0;
        for(auto i:res){
            int k =0;
            for(auto j:i){
                k=k*10+j;
                cout<<j<<" ";
            }
            cout<<"->"<<k<<" ";
            sum+=k;
            cout<<"\n";
        }
        return sum;
    }
};