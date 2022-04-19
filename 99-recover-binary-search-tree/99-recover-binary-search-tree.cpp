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
   // TreeNode * createbst(vector<int>&res,int low,int high){
   //      if(low>high)return nullptr;
   //      int mid = (low+high)/2;
   //      TreeNode * temp = new TreeNode(res[mid]);
   //      temp->left = createbst(res,low,mid-1);
   //      temp->right = createbst(res,mid+1,high);
   //      return temp;
   //  }
    vector<int>res;
    int i=0;
    void check(TreeNode *root){
        if(!root)return;
        check(root->left);
        if(res[i]!=root->val)swap(res[i],root->val);
        i++;
        check(root->right);
    }
    void inorder(TreeNode *root,vector<int>&res){
        if(!root)return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    void recoverTree(TreeNode* root) {
        inorder(root,res);
        // cout<<n;
        sort(res.begin(),res.end());
        // for(auto i:res){
        //     cout<<i<<" ";
        // }
        check(root);
    }
};