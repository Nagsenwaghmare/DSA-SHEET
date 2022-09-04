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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode *,int>>q;
        map<int,vector<int>>mp;
        q.push({root,0});;
        while(!q.empty()){
            int n = q.size();
            multiset<pair<int,int>>s;
            for(int i=0;i<n;i++){
            TreeNode * curr = q.front().first;
            int hd = q.front().second;
            s.insert({hd,curr->val});
            q.pop();
            if(curr->left)q.push({curr->left,hd-1});
            if(curr->right)q.push({curr->right,hd+1});
            }
            for(auto l:s){
                mp[l.first].push_back(l.second);
            }
        }
        vector<vector<int>> res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        return res;
    }
};