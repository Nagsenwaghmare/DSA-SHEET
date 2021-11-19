
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };



  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>s;
        ListNode *temp = head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }
        ListNode *k = new ListNode(0);
        ListNode *l= k;
        for(auto m:s){
            k->next = new ListNode(m);
            k = k->next;
        }
        return l->next;
    }
  };