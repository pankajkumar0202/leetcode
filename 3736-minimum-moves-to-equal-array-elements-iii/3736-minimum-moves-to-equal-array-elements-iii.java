class Solution {
    public int minMoves(int[] nums) {
        Arrays.sort(nums);
        int count = 0;
        int max = nums[nums.length-1];
        for(int i = 0; i < nums.length; i++) {
            while(nums[i] != max) {
                nums[i] += 1;
                count++;
            }
        }
        return count;  
    }
}