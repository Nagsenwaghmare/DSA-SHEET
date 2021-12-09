
// to print levelordertraversal we can use two functions first is printnodesatk and height function and we will call function printnodesatk for 
//every value of k ranging from o to h-1;


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

int height(Node *root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}

void printnodeatK(Node *root,int k){
    if(root==NULL) return;
    if(k==0){
        cout<<root->data<<" ";
    }else{
        printnodeatK(root->left,k-1);
        printnodeatK(root->right,k-1);
    }
}

void levelordertravrsal(Node *root){
    int m = height(root);
    for(int i=0;i<m;i++){
        printnodeatK(root,i);
    }
}

//time complexity o(h*m);