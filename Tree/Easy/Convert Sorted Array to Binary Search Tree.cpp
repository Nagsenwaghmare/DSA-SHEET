

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


 // here logic behind making the binary tree should be make every left node as left as possible in the given array
 // this we can make using by upgrading our low value to mid-1;
// and to make every right node as majubg low as mid+1


TreeNode *converttobst(vector<int>&nums,int low,int high){
        if(low>high) return nullptr;
        int mid = (low+high)/2;
        TreeNode * root = new TreeNode(nums[mid]);
        root->left = converttobst(nums,low,mid-1);
        root->right = converttobst(nums,mid+1,high);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return nullptr;
        int n = nums.size()-1;
        TreeNode * head =converttobst(nums,0,n);
        return head;
    }