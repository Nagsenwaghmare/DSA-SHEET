#include <bits/stdc++.h>
using namespace std;


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

// print nodes at distance k from the root of the tree


void printnodeatK(Node *root,int k){
    if(root==NULL) return;
    if(k==0){
        cout<<root->data<<" ";
    }else{
        printnodeatK(root->left,k-1);
        printnodeatK(root->right,k-1);
    }
}


