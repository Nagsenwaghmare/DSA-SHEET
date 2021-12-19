
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

 // in this solution we kept a track of current maximum in a path through which we are going 
 // and checking whether current nodes val is greater than  maximum or not if it is greater then we are increamenting our result;




  int noofgoodnodes(int maximum,TreeNode *root){
        if(!root) return 0;
        int res =  root->val>=maximum?1:0;
        res+= noofgoodnodes(max(maximum,root->val),root->left);
        res+= noofgoodnodes(max(maximum,root->val),root->right);
        return res;
    }
    int goodNodes(TreeNode* root) {
        int maximum = INT_MIN;
        return noofgoodnodes(maximum,root);
    }