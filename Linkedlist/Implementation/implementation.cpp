#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Insert node at end function 
Node *insertatend(Node *head,int a){
    Node *temp  = new Node(a);
    if(head==NULL){
        return temp;
    }
    Node * t = head;
    while(t->next!=NULL){
        t= t->next;
    }
    t->next = temp;
    return head;
}


// delete  first node function

Node *deletfirstNode(Node *head){
    if(head==NULL) return NULL;
    else{
        Node *temp = head->next;
        return temp;
    }
}

//delete last node function

Node *deletlastNode(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return NULL;
    else{
        Node * temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
}
//print the whole linkedlist

void printlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
//insertatcertainposition

Node *insertatposition(Node * head,int pos,int k){
    Node * temp = new Node(k);
    if(pos==1){
        temp->next = head;
        return temp; 
    }
    Node *curr = head;
    for(int i=0;i<pos-2 && curr!=NULL;i++){
        curr = curr->next;
    }
    if(curr==NULL) return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

// main function


int main(){
    Node *head = new Node(30);
    head->next = new Node(40);
    head->next->next = new Node(50);
    insertatend(head,70);
    head = deletlastNode(head);
    printlist(head);
}
