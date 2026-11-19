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
    public ListNode mergeNodes(ListNode head) {
        
        List<Integer>list = new ArrayList<>();
        ListNode curr = head;
        int sum = 0;
        int c = 0;
        int c1 = 0;

        while(curr != null) {

            c++;
           sum += curr.val;

           if(curr.val == 0 && c > 1) {
              list.add(sum);
              sum = 0; 
            }

           curr = curr.next;
        }

        ListNode temp = new ListNode(list.get(0));
        ListNode res = temp;

        for(int i = 1; i<list.size(); i++) {

            res.next = new ListNode(list.get(i));
            res = res.next;
        }

        return temp;
    }
}