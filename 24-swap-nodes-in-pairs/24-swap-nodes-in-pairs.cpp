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
    ListNode* swapPairs(ListNode* head) {

        ListNode *dummy = new ListNode(0);
        dummy->next= head;
        ListNode *prev = dummy;
        ListNode *curr = dummy;
        ListNode *Next = dummy;
        int size = 0;
        while(curr->next){
            size++;
            curr = curr->next;
        }
        while(size>=2){
            curr = prev->next;
            Next = curr->next;
            curr->next = Next->next;
            Next->next = prev->next;
            prev->next = Next;
            Next = curr->next;
            size-=2;
            prev = curr;
        }
        return dummy->next;
    }
};