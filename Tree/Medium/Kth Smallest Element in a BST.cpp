// here  in this questioon we have used the  logic that while we are doing inorder traversal it does all the element in sorted order


// hence we can easily find the kth smallest element just by returning the vector's kth element


#include <bits/stdc++.h>
using namespace std;



struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


  void inorder(vector<int>&res,TreeNode *root){
        if(!root)  return ;
        inorder(res,root->left);
        res.push_back(root->val);
        inorder(res,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        inorder(res,root);
        return res[k-1];
    }