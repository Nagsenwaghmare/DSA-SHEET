



#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p= node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete (p);
    }
};






