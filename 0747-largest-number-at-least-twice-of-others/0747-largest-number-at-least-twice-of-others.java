class Solution {
    public int dominantIndex(int[] nums) {
        int max = Integer.MIN_VALUE;
        int temp = 0;
        for(int i = 0; i<nums.length; i++) {
            if(nums[i] > max) {
                max = nums[i];
                temp = i;
            }
        }
        for(int j = 0; j<nums.length; j++) {
            if(nums[j] * 2 > max && nums[j] != max) {
                return -1;
            }
        }
        return temp; 
    }
}