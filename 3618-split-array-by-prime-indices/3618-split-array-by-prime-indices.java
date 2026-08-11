class Solution {
    public long splitArray(int[] nums) {
        long sum = 0;
        long sump = 0;
        for(int i = 0; i<nums.length; i++) {
            int count = 0;
            if(i < 2) {
                sum += nums[i];
               continue;  
            }
            for(int j = 2; j<=Math.sqrt(i); j++) {
               if(i % j == 0) {
                   count++;
                }   
            }
            if(count == 0) {
                sump += nums[i];
            }
            else{
                sum += nums[i];
            }
        }
        return Math.abs(sump - sum);
    }
}