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
    public ListNode modifiedList(int[] nums, ListNode head) {
        Set<Integer>st = new HashSet<>();

        for(int i: nums) {
            st.add(i);
        }

        ListNode curr = head;
        ListNode prev = null;

        while(curr != null) {

            if(st.contains(curr.val)) { 

              if(curr == head) head = head.next;
              else prev.next = curr.next;

            }
            else {
                prev = curr;
            }
            curr = curr.next;
        }

        return head;
    }
}