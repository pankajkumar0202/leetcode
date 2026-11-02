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
    public int getDecimalValue(ListNode head) {
        
        ListNode temp = head;
        ListNode first = head;  
        int ans = 0;
        int c = 0;

        while(temp.next != null) {
            c++;
            temp = temp.next;
        }
        while(first != null) {

            ans += (int)Math.pow(2,c)*first.val;
            first = first.next;
            c--;
        }

        return ans;
    }
}