/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode * buildtree(int start,vector<int>&nums,int end){
        if(start>end)return nullptr;
        int idx=0;
        int maxi = INT_MIN;
        for(int i=start;i<=end;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i;
            }
        }
        TreeNode * temp = new TreeNode(maxi);
        temp->left = buildtree(start,nums,idx-1);
        temp->right = buildtree(idx+1,nums,end);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n = nums.size();
        return buildtree(0,nums,n-1);
    }
};