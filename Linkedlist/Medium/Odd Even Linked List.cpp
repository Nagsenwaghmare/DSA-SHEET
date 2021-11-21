#include <bits/stdc++.h>
using namespace std;




struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  ListNode* oddEvenList(ListNode* head) {
        ListNode node1(0);
        ListNode node2(0);
        ListNode *p1 = &node1;
        ListNode *p2 = &node2;
        int pos = 1;
        while(head){
            if(pos%2!=0){
                ListNode *k = new ListNode(head->val);
                p1->next=k;
                p1=p1->next;
            }else if(pos%2==0){
                ListNode *k = new ListNode(head->val);
                p2->next=k;
                p2=p2->next;
            }
            head=head->next;
            pos++;
        }
        p1->next = node2.next;
        return node1.next;
    }