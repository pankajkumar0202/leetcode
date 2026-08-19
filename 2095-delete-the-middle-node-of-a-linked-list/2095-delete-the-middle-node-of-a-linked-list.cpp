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
    ListNode* deleteMiddle(ListNode* head) { 
       int count = 0; 
       ListNode* first = head; 
       while(first != NULL) { 
          first = first->next; 
          count++; 
        }  
       int temp = count/2; 
       int count2 = 0; 
       ListNode* second = head; 
       if(head->next == NULL) return NULL;
       while(count2 <temp-1) {
        count2++;
        second = second->next;
       }
       second->next =  second->next->next;
        return head;  
    } 
};  