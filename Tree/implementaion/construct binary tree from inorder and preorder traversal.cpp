

// let's suppose we have two arrays called inorder and preorder
//we have to build the binary tree using both of this array
// inorder [] = {40,20,50,10,30,80,70,90}
// preorder[] = {10,20,40,50,30,70,80,90};


// order of nodes in inorder- leftnode-rootnoode-rightnode
// order of nodes in preorder rootnode-leftnode-rightnode


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
int preindex = 0;


/// below is o(n*n)solution we can reduce it in 0(n) by using map to store the index as values of inorder elements;
TreeNode *constree(vector<int>&inorder,vector<int>&preorder,int is,int ie){
    if(is>ie) return nullptr;
    TreeNode *root = new TreeNode (preorder[preindex++]);
    int inindex;
    for(int i=is;i<=ie;i++){
        if(inorder[i]==root->val){
            inindex = i;
            break;
        }
    }
    root->left = constree(inorder,preorder,is,inindex-1);
    root->right = constree(inorder,preorder,inindex+1,ie);
    return root;
}
int main(){
    vector<int>inorder = {40,20,50,10,30,80,70,90};
    vector<int>preorder = {10,20,40,50,30,70,80,90};
    constree(inorder,preorder,0,inorder.size()-1);

}
///
//below is the 0(n) solution

TreeNode *constree(vector<int>&inorder,vector<int>&preorder,int is,int ie,unordered_map<int,int>&mp){
    if(is>ie) return nullptr;
    TreeNode *root = new TreeNode (preorder[preindex++]);
    int inindex = mp[root->val];
    root->left = constree(inorder,preorder,is,inindex-1,mp);
    root->right = constree(inorder,preorder,inindex+1,ie,mp);
    return root;
}

int main(){
    vector<int>inorder = {40,20,50,10,30,80,70,90};
    vector<int>preorder = {10,20,40,50,30,70,80,90};
    unordered_map<int,int>mp;
    for(int i=0;i<=inorder.size()-1;i++){
        mp[inorder[i]] = i;
    }
    TreeNode *root = constree(inorder,preorder,0,inorder.size()-1,mp);
   
}