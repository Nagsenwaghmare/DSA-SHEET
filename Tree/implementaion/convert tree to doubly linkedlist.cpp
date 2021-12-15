//  here , to convert tree into doubly linkedlist we are keeping a pointer called previous and we are updating the pointer
// logic will be we will be using the inorder traversal of tree and we will make a curr pointer/root 
// and initially prev = nullptr and our head will be the root/curr pointer
//  root->left  = prev ;
//  prev->right = root




struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left=right=nullptr;
    }
};

Node *prev = nullptr;
Node *converttreetodll(Node *root){
    if(root==nullptr) return root;
    Node *head = converttreetodll(root->left);
    if(prev = nullptr) head = root;
    else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    converttreetodll(root->right);
    return head;
}
