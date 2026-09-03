class Solution {
    public boolean uniformArray(int[] nums1) {
        int mini = Integer.MAX_VALUE;
        int mini2 = Integer.MAX_VALUE;
        int a = 0, b = 0;
        for(int i = 0; i<nums1.length; i++) {
            if(nums1[i] % 2 == 0) {
               mini = Math.min(mini,nums1[i]);
               a++;
            }
            else{
                mini2 = Math.min(mini2,nums1[i]);
               b++;
            }
        }
        if(a == nums1.length || b == nums1.length || mini > mini2)  return true;
        return false;
    }
}