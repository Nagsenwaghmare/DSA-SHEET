/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==nullptr)return {};
        queue<Node *>q;
        q.push(root);
        vector<vector<int>>res;
        res.push_back({root->val});
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                Node * curr = q.front();
                q.pop();
                for(auto i:curr->children){
                    if(i!=nullptr){
                        q.push(i);
                        temp.push_back(i->val);
                    }
                }
                // res.push_back(temp);
                // return res;
            }
            res.push_back(temp);
        }
        res.pop_back();
        return res;
    }
};