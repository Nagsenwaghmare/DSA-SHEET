
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


  // here in this question we have used the logic that if one of the left root and right root are not null then we will call recursive for the other root  
  // and will add the root->val to the string;


  void binarypath(vector<string>&res,TreeNode *root,string str){
        if(root->left==nullptr && root->right==nullptr){
            res.push_back(str);
            return;
        }
       if(root->left) binarypath(res,root->left,str+"->"+to_string(root->left->val));
       if(root->right) binarypath(res,root->right,str+"->"+to_string(root->right->val));
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        binarypath(res,root,to_string(root->val));
        return res;
    }