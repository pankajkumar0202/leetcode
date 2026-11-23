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
    public int pairSum(ListNode head) {

        int arr [] = new int[100000];
        ListNode temp = head;
        int i = 0;

        while(temp != null) {

            arr[i] = temp.val;
            temp = temp.next;
            i++;

        }

        int j = 0;
        int k = i-1;
        int sum = 0;
        int max = 0;

        while(j < k) {
            
            sum = arr[j] + arr[k];
            max  = Math.max(max, sum);
            j++;
            k--;

        }
        return max; 
    }
}