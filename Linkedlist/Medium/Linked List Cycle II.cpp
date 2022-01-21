#include <bits/stdc++.h>
using namespace std;




struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };



// here in this solution we checked whether there is a cycle in the linkedlist or not
// list will have cycle if one of node is repeating otherwise there wont be any cycle

ListNode *detectCycle(ListNode *head) {
        set<ListNode *>s;
        ListNode * temp = head;
        while(temp!=nullptr){
            if(s.find(temp)!=s.end()){
                return temp;
            }else{
                s.insert(temp);
            }
            temp = temp->next;
        }
        return nullptr;
    }



ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
        return NULL;
        ListNode *slow = head;
        ListNode * fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) {
                while(slow!=head){
                    slow = slow->next;
                    head = head->next;
                }
                return head;
            }
        }
        return nullptr;
    }


    // lets suppose when slow travels l1 distance and fast travel l2 distance
    // time when they meet slow will travel its own distance l1 + distance traveled by l2 hence distance by slow  = l1+l2
    // and distance traveled by fast will be its own distance l2 +it will travel slow distance l1+l2 +l2+some distance (X)
    //hence 2(l1+l2) = l1+l2+l2+x;
    //x = l1  hence when they meet to find the starting point we have to move slow by l1 distance and we will get the starting 