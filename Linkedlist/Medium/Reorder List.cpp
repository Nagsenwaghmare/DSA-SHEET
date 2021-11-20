
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };








class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return;
        ListNode *temp = head;
        stack<ListNode*>s;
        int size = 0;
        while(temp!=NULL){
            s.push(temp);
            size++;
            temp = temp->next;
        }
        ListNode *tmp = head;
        for(int i=0;i<size/2;i++){
            ListNode *k = s.top();
            s.pop();
            k->next = tmp->next;
            tmp->next = k;
            tmp=tmp->next->next;
        }
        tmp->next = NULL;
    }
};