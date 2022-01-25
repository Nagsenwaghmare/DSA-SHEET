#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };





 TreeNode * toBST(ListNode *head, ListNode * tail){
        ListNode * slow = head;
        ListNode * fast = head;
        if(head==tail) return nullptr;
        while(fast!=tail && fast->next!=tail){
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode * root = new TreeNode(slow->val);
        root->left = toBST(head,slow);
        root->right = toBST(slow->next,tail);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr) return nullptr;
        return toBST(head,nullptr);
    }