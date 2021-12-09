#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right =NULL;
    }
};



// inorder traversal
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//preorder traversal
void preorder(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//  postorer traversal
void postorder(Node *root){
    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
}


// height of a tree 
int height(Node *root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    Node * pre = root;
    Node *post = root;
    inorder(root);
    cout<<'\n';
    preorder(pre);
    cout<<'\n';
    postorder(post);
}