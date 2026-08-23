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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val==val) {
            head = head->next;
        }
        if(head == NULL) return NULL;
        ListNode* first = head;
        ListNode* prev = NULL;
        while(first != NULL) {
            if(first->val == val) {
                prev->next = prev->next->next;
                first = prev->next;
            }
            else{ 
               prev = first;
               first = first->next;
            }
        }
        return head;  
    }
};