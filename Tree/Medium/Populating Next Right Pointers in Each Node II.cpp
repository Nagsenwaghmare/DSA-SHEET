#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


Node* connect(Node* root) {
        if(root==nullptr)return nullptr;
        queue<Node *>q;
        vector<vector<Node *>>res;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<Node *>temp;
            for(int i=0;i<n;i++){
                Node * curr = q.front();
                q.pop();
                temp.push_back(curr);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(temp);
        }
        int n = res.size();
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<res[i].size()-1;j++){
                res[i][j]->next = res[i][j+1];
            }
            if(j==res[i].size()-1)res[i][j]->next = nullptr;
        }
        return root;
    }