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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return nullptr;
        if(!head->next) return head;
        ListNode *tmp = head;
        int size = 1;
        while(tmp){
            size++;
            tmp =tmp->next;
        }
        size--;
        if(k>size) k = k%size;
        for(int i=0;i<k;i++){
            ListNode *temp = head;
            ListNode * newhead = head;
            while(temp->next->next){
                temp = temp->next;
            }
            ListNode *first = temp->next;
            temp->next = nullptr;
            first->next = newhead;
            head = first;
        }
        return head;
    }
};