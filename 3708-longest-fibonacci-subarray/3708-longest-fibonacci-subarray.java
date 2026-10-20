class Solution {
    public int longestSubarray(int[] nums) {
        int c = 0;
        int ans = 0;
        
        for(int i = 0; i<nums.length-2; i++) {
            if((nums[i] + nums[i+1]) == nums[i+2]) c++;
            else c = 0;
            ans = Math.max(ans, c);
        }

        return ans+2;
    }
}