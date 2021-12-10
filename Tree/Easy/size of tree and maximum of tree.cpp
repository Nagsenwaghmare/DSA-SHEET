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



/// here we will find the size of tree using recursion as well as maximum of tree
  int sizeoftree(Node *root){
      if(root ==NULL) return 0;
      return 1+sizeoftree(root->left)+sizeoftree(root->right);
  }


  int maximumoftree(Node *root){
      if(root== NULL) return INT_MIN;
      return max(root->data,max(maximumoftree(root->left),maximumoftree(root->right)));

  }