class Solution {
    public int maximumPossibleSize(int[] nums) {
        int c = 1;
        int temp = nums[0];
        for(int i = 1; i<nums.length; i++) {
            if(temp <= nums[i]) {
                c++;
                temp = nums[i];
            }
        }
        return c;
    }
}