#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


// using extra space 

ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>res;
        for(int i=0;i<lists.size();i++){
            ListNode *k = lists[i];
            while(k!=NULL){
                res.push_back(k->val);
                k=k->next;
            }
        }
        int n = res.size();
        sort(res.begin(),res.end());
        ListNode *temp = new ListNode(0);
        ListNode *kd = temp;
        for(int i=0;i<res.size();i++){
            temp->next = new ListNode(res[i]);
            temp=temp->next;
        }
        return kd->next;
    }
// no extra space


class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if(l1 == nullptr){
        return l2;
    }
    if(l2 == nullptr){
        return l1;
    }
    if(l1->val <= l2->val){
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else{
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}
    ListNode *mergeKLists(vector<ListNode *> &lists) {
    if(lists.empty()){
        return nullptr;
    }
    while(lists.size() > 1){
        lists.push_back(mergeTwoLists(lists[0], lists[1]));
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists.front();
}
};