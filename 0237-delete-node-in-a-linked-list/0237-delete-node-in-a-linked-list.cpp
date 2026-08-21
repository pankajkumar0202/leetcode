/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ans = node;
        while(ans->next->next != NULL){
           ans->val = ans->next->val;
           ans = ans->next;
        }   
       ans->val = ans->next->val;
       ans->next = ans->next->next;    
    }
};