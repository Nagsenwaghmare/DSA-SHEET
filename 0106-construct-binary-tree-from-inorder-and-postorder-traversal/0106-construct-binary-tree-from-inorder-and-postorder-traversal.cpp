
class Solution {
public:
    map<int,int>mp;
    TreeNode * buildtree(int left,int right,vector<int>& postorder,int &postidx){
        if(left>right)return nullptr;
        TreeNode * root = new TreeNode(postorder[postidx--]);
        int mid = mp[root->val];
        root->right = buildtree(mid+1,right,postorder,postidx);
        root->left = buildtree(left,mid-1,postorder,postidx);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int postidx=n-1;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return buildtree(0,n-1,postorder,postidx);
    }
};