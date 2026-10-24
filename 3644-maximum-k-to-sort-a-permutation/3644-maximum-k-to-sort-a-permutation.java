class Solution {
    public int sortPermutation(int[] nums) {
        int ans = -1;
        int res = 0;
        
        for(int i = 0; i<nums.length; i++) {
            if(nums[i] != i) {
              ans = ans & nums[i];
              res++;
            }
        }
        if(res == 0)  return 0;
        return ans;
    }
}