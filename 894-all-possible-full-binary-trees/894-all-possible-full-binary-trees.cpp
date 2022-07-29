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
   vector<TreeNode*> helper(int n){
       if(n==1){
           vector<TreeNode*>ans;
           TreeNode * k = new TreeNode(0);
           ans.push_back(k);
           return ans;
       }
       vector<TreeNode*>res;
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> left = helper(i);
            vector<TreeNode*> right = helper(n-i-1);
            for(auto l:left){
                for(auto r:right){
                    TreeNode * newnode = new TreeNode(0);
                    newnode->left = l;
                    newnode->right = r;
                    res.push_back(newnode);
                }
            }
        }
       return res;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        return helper(n);
    }
};