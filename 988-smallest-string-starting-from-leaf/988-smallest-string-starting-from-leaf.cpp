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
    void helper(TreeNode * root,string str,vector<string>&res){
        if(!root)return;
        str+='a'+(root->val);
        if(root->left==nullptr && root->right==nullptr){
            res.push_back(str);
            // str="";
            return;
        }
        if(root->left)helper(root->left,str,res);
        if(root->right)helper(root->right,str,res);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>res;
        if(root==nullptr)return "";
        string str =""; 
        helper(root,str,res);
        vector<string>temp;
        for(auto i:res){
            string k = i;
            reverse(k.begin(),k.end());
            temp.push_back(k);
        }  
        sort(temp.begin(),temp.end());
       return temp[0];
    }
};