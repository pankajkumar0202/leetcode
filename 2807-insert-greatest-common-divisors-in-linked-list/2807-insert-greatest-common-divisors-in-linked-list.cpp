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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if(head->next==NULL){
      return head;
    }
        ListNode* first = head;
        while(first->next != NULL) {
            int temp = gcd(first->val,first->next->val);
            ListNode* second = new ListNode(temp);
            second->next = first->next;
            first->next = second;
            first = second->next;
        }
        return head;
      
    }
};