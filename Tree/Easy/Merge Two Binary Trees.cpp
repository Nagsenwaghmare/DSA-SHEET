

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

 // here is the recursive code for  the above solution 
 // where the logic behind solution is create new node only if both node are not null else you can easily return the node which is not null 
 // and call recursively for the left node as well as right node.



TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL &&root2==NULL) return NULL;
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;
        TreeNode * root = new TreeNode(root1->val+root2->val);
        root->left=mergeTrees(root1->left,root2->left);
        root->right=mergeTrees(root1->right,root2->right);
        return root;
    }