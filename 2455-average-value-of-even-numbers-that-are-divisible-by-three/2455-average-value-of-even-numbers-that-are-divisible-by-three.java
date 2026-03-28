class Solution {
    public int averageValue(int[] nums) {
        int sum = 0;
        int count = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                sum += nums[i];
                count++;
            }
        }
        if(count == 0) return 0;
        else  return sum / count;

    }
}