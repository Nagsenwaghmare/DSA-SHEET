class MyHashSet {
public:
    ListNode *head;
    MyHashSet() {
        head = new ListNode(-1);
    }
    
    void add(int key) {
        ListNode *p = head;
        while(p->next!=NULL){
            if(p->val==key) return;
            p=p->next;
        }
        if(p->val==key)return;
        else{
            ListNode *temp = new ListNode(key);
            p->next = temp;
        }
    }
    
    void remove(int key) {
       ListNode *k = head;
        while(k->next!=NULL){
            if(k->next->val==key){
                break;
            }
            k=k->next;
        }
        if(k->next==NULL)return;
        ListNode *temp = k->next;
        k->next = temp->next;
        delete(temp);
    }
    
    bool contains(int key) {
        ListNode *p = head;
        while(p!=NULL){
            if(p->val==key){
                return true;
            }
            p=p->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */