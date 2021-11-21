#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

   //without using extra space
    ListNode* partition(ListNode* head, int x) {
        ListNode node1(0);
        ListNode node2(0);
        ListNode *p1 = &node1;
        ListNode *p2 = &node2;
        while(head){
            if(head->val<x){
                p1=p1->next;
                p1->next = head;
            }else{
                p2=p2->next;
                p2->next = head;
            }
            head=head->next;
        }
        p2->next = nullptr;
        p1->next = node2.next;
        return node1.next;

    }





  //using extra space
  ListNode* partition(ListNode* head, int x) {
        vector<int >res;
        vector<int>p1;
        ListNode * temp = head;
        while(temp){
            if(temp->val<x){
                p1.push_back(temp->val);
            }else{
                res.push_back(temp->val);
            }
            temp = temp->next;
        }
        ListNode * k = new ListNode(0);
        ListNode *m = k;
        for(int i=0;i<p1.size();i++){
            ListNode *s = new ListNode(p1[i]);
            k->next = s;
            k=k->next;
        }
        for(int j=0;j<res.size();j++){
            ListNode *s = new ListNode(res[j]);
            k->next = s;
            k=k->next;
        }
        return m->next;;
    }


