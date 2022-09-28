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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return nullptr;
        ListNode newhead(-1);
        newhead.next = head;
        ListNode *fast = &newhead;
        ListNode *slow = &newhead;
        for(int i=0;i<n;i++){
            fast = fast->next; 
        }
        while(fast->next!=NULL){
            fast = fast->next;
            slow=slow->next;
        }
        ListNode *nodetobedeleted = slow->next;
        slow->next = slow->next->next;
        delete(nodetobedeleted);
        return newhead.next;
    }
};