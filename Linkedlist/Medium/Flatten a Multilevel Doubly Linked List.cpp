

#include <bits/stdc++.h>
using namespace std;



class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        for(Node *h = head;h;h=h->next){
            if(h->child){
                Node *Next = h->next;
                h->next = h->child;
                h->next->prev = h;
                h->child = nullptr;
                Node *p = h->next;
                while(p->next)p=p->next;
                p->next = Next;
                if(Next)Next->prev=p;
            }
        }
        return head;
    }
};