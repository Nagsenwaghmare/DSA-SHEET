
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



  TreeNode *converttobbinary(TreeNode * root,vector<int>&res,int low,int high){
        if(low>high) return nullptr;
        int mid = (low+high)/2;
        TreeNode *temp = new TreeNode(res[mid]);
        temp->left = converttobbinary(root,res,low,mid-1);
        temp->right = converttobbinary(root,res,mid+1,high);
        return temp;
    }
    
    void inorder(TreeNode *root,vector<int>&res){
        if(!root) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        int low  =0;
        int high = res.size()-1;
        TreeNode * tmp = converttobbinary(root,res,low,high);
        return tmp;
    }