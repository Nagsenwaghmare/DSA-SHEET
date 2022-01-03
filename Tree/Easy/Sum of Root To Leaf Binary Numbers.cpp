
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


  int sum(TreeNode *root,int val){
        if(!root) return 0;
        val = (val*2)+root->val;
        return root->left==root->right?val:sum(root->left,val)+sum(root->right,val);
    }
    int sumRootToLeaf(TreeNode* root) {
        int val  =0;
        return sum(root,val);
    }