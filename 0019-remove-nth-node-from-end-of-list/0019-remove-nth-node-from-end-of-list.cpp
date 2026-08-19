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
        ListNode* first = head;
        int count = 0;
        while(first != NULL) {
            first = first->next;
            count++;
        }
        int temp = count-n;
        ListNode* second = head;
        int count2 = 0;
        if(temp == 0) return head->next;
        if (head->next == NULL)  return NULL;
        while(count2 < temp-1) {
            count2++;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};