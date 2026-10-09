class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int max = Integer.MIN_VALUE;
        int sum = 0;

        for(int i = 0; i<nums.length; i++) {
            sum += nums[i];
             max = Math.max(max, sum);
            if(sum < 0) {
               sum = 0;
            }  
        }

        int sum1 = 0;
        int min = Integer.MAX_VALUE;
        int res = 0;

        for(int i = 0; i<nums.length; i++) {
            sum1 += nums[i];
             min = Math.min(min, sum1);
            if(sum1 > 0) {
               sum1 = 0;
            }  
        }
        min = Math.abs(min);

        return Math.max(max, min);
       
    }
}