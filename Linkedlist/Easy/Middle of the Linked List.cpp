
#include <bits/stdc++.h>
using namespace std;



struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };




class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int midindex  = 0;
        int count = 0,cnt=0;
        ListNode *temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        midindex = (count/2)+1 ;
        cout<<midindex;
        ListNode *tmp = head;
        while(tmp!=NULL){
            cnt++;
            if(cnt==midindex){
                return tmp;
            }
            tmp= tmp->next;
        }
        ListNode *k = head;
        return k;
    }
};