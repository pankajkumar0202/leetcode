/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {

        ListNode first = null;
        ListNode second = head;

        ListNode curr1 = head;
        ListNode newNode = new ListNode(curr1.val);
        ListNode res = newNode;

        while(curr1.next != null) {

           curr1 = curr1.next;
           newNode.next = new ListNode(curr1.val);
           newNode = newNode.next;
        }

        while(second != null) {

            ListNode next = second.next;
            second.next = first;
            first = second;
            second = next;
            
        }
        
       
        while(res != null && first != null) {
 
            if(res.val != first.val)  return false;

            first = first.next;
            res = res.next;

        }

        return true;
    }
}