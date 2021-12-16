// first we gonna discuss the bruteforce solution where i got a logic that  if we get all the elements of tree in a vector
// then we can easily get the minimum of  two nodes


// here is the solution that i thought for 


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

void inorder(vector<int> &res,TreeNode *root){
        if(!root){
            return ;
        }
        inorder(res,root->left);
        res.push_back(root->val);
        inorder(res,root->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> res;
        inorder(res,root);
        int minoftree = INT_MAX;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++){
                minoftree = min(minoftree,abs(res[i+1]-res[i]));
        }
        return minoftree;
    }
// here is the another solution that i solved for

int val = -1,mintree = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        if(root->left)getMinimumDifference(root->left);
        if(val>=0){
            mintree = min(mintree,root->val-val);
        }
        val = root->val;
        if(root->right)getMinimumDifference(root->right);
        return mintree;
    }