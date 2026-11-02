class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int temp = nums[nums.length/2];
        int count = 0;
        for(int i = 0; i<nums.length; i++) {
           if(nums[i] < temp) {
               count += temp - nums[i];
            }
            else if(nums[i] > temp) {
               count += nums[i] - temp;
            }
            else{
              count += 0;
            }
        }
        return count;  
    }
}