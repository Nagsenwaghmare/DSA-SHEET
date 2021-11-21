#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


  ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>res;
        ListNode *temp = head;
        while(temp){
            res.push_back(temp->val);
            temp = temp->next;
        }
        int n = res.size();
        ListNode node(0);
        ListNode *tmp = &node;
        int i = 0;
        int groups = n/k;
        while(i<n && groups--){
                int pos = 1;
            stack<int>s;
            while((pos++)<=k && i<n){
                s.push(res[i++]);
                }
            while(!s.empty()){
                ListNode *n = new ListNode(s.top());
                tmp->next = n;
                tmp=tmp->next;
                s.pop();
                }
        }
        while(i<n){
            ListNode *n = new ListNode(res[i++]);
                tmp->next = n;
                tmp=tmp->next;
        }
        return node.next;
    }