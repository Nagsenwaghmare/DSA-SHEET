#include <bits/stdc++.h>
using namespace std;




struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


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