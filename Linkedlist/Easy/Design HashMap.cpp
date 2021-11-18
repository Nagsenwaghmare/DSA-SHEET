#include <bits/stdc++.h>
using namespace std;


struct Node{
    int key;
    int value;
    Node* next;
    
    Node(int k, int v, Node* n):key(k),value(v),next(n){}
};
class MyHashMap {
public:
    const static int H_SIZE = 32;
    Node* map[H_SIZE];
    
    MyHashMap() {
        for(int i=0; i<H_SIZE; i++){
            map[i] = NULL;
        }
    }
    void put(int key, int value) {
        int hsh = hash(key);
        Node* h = map[hsh];
        Node* n = new Node(key, value, NULL);
        if(h==NULL){
            map[hsh] = n;
        }
        else{
            while(h->next != NULL){
                if(h->key == key){
                    h->value = value;
                    return;
                }
                h = h->next;
            }
            if(h->key == key){
                h->value = value;
                return;
            }
            h->next = n;
        }
    }
    int get(int key) {
        int hsh = hash(key);
        Node* h = map[hsh];
        while(h!=NULL){
            if(h->key == key){
                return h->value;
            }
            h=h->next;
        }
        return -1;
    }
    void remove(int key) {
        int hsh = hash(key);
        Node* h = map[hsh];
        Node* prev = NULL;
        while(h!=NULL){
            if(h->key == key){
                if(prev!=NULL){
                    prev->next = h->next;
                }
                else{
                    map[hsh] = h->next;
                }
                Node* t = h;
                h = h->next;
                delete t;
                return;
            }
            prev = h;
            h = h->next;
        }
    }
    
    int hash(int index){
        return index & (H_SIZE - 1);
    }
};
