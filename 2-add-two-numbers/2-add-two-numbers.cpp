/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//     ListNode* insertAtend(ListNode *head,int v){
//         ListNode *temp = new ListNode(v);
//         if(head==NULL) return temp;
//         ListNode * curr = head;
//         while(curr->next!=NULL){
//             curr=curr->next;
//         }
//         curr->next = temp;
//         return head;
    
//     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode newHead(0);
        ListNode *temp = &newHead;
        while(l1 || l2|| carry){
            carry += (l1?l1->val:0) +(l2?l2->val:0);
            temp->next = new ListNode(carry%10);
            temp = temp->next;
            carry=carry/10;
            if(l1) l1= l1->next;
            if(l2) l2= l2->next;
        }
        return newHead.next;
    }
};