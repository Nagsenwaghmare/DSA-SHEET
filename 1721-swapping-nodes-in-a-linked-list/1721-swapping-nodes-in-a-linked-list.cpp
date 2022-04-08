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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fromstart = nullptr;
        ListNode *fromend = nullptr;
        ListNode *p = head;
        while(p!=nullptr){
            if(fromend!=nullptr)fromend = fromend->next;
            if(--k==0){
                fromstart = p;
                fromend = head;
            }
            p = p->next;
        }
        swap(fromstart->val,fromend->val);
        return head;
    }
};