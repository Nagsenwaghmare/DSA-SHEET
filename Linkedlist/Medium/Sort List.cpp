#include <bits/stdc++.h>
using namespace std;




struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


//O(1) extra _SPACE

ListNode* midpoint(ListNode* head){
        if(head == NULL or head->next == NULL){
            return head;
        }
        
        ListNode *slow = head, *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* mergeSortedLists(ListNode* a, ListNode* b){
        if(a == NULL) return b;
        if(b == NULL) return a;
        
        ListNode* temp;
        if(a->val <= b->val){
            temp = a;
            temp->next = mergeSortedLists(a->next, b);
        }
        else{
            temp = b;
            temp->next = mergeSortedLists(a, b->next);
        }
        
        return temp;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next == NULL){
            return head;
        }
        
        ListNode* mid = midpoint(head);
        ListNode* a = head;
        ListNode* b = mid->next;
        
        mid->next = NULL;
        
        a = sortList(a);
        b = sortList(b);
        
        ListNode* temp = mergeSortedLists(a, b);
        return temp;
    }


  ListNode* sortList(ListNode* head) {
        ListNode *temp = head;
        ListNode newhead(0);
        ListNode *x = &newhead;
        vector<int> res;
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            ListNode *s = new ListNode(res[i]);
            x->next = s;
            x=x->next;
        }
        return newhead.next;
    }
