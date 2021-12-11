

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


  int sum = 0;
    int rangesum(TreeNode* root, int low, int high){
        if(root) {
        rangesum(root->left,low,high);
        if(root->val<=high &&root->val>=low)sum+=root->val;
        rangesum(root->right,low,high);
        }
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        return rangesum(root,low,high);
    }