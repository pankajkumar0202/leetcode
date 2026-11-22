
class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {

        
        ListNode curr = list1;
        ListNode curr1 = list1;
        ListNode newNode = new ListNode(curr1.val);
        ListNode head = newNode;

        while(curr1.next != null) {

           curr1 = curr1.next;
           newNode.next = new ListNode(curr1.val);
           newNode = newNode.next;
        }

        for(int i = 0; i<a; i++) {

            if(i+1 == a) {
                curr.next = list2;
            }
            curr = curr.next;
        }
         
        ListNode temp = null;

        for(int i = 0; i<=b; i++) {
            if(i == b) {
                temp = head.next;
            }
            head = head.next;
        }

        ListNode curr2 = list1;

        while(curr2.next != null) {
           
            curr2 = curr2.next;
        }
        curr2.next = temp;
 
        return list1;
    }
}