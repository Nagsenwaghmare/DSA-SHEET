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
    int widthOfBinaryTree(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        unsigned int start=0;
         unsigned int end=0;
         unsigned int maxi = 0;
        map<TreeNode *,unsigned int >mp;
        while(!q.empty()){
            int n = q.size();
            vector<TreeNode *>temp;
            for(int i=0;i<n;i++){
                
                TreeNode * curr = q.front();
                if(i==0)start =mp[curr];
                if(i==n-1)end = mp[curr];
                temp.push_back(curr);
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                    mp.insert({curr->left,mp[curr]*2});
                    
                }
                if(curr->right){
                    q.push(curr->right);
                    mp.insert({curr->right,mp[curr]*2+1});
                }
            }
            maxi = max(end-start+1,maxi);
        }
        
        return maxi;
    }
};