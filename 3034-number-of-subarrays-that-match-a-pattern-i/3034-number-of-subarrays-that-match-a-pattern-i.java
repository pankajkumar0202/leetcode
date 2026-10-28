class Solution {
    public int countMatchingSubarrays(int[] nums, int[] pattern) {
        int ans = 0;

        for(int i = 0; i<nums.length-pattern.length; i++) {
            int c  = 0;

            for(int j = 0; j<pattern.length; j++) {

                if(nums[i+j+1] > nums[i+j] && pattern[j] == 1) {
                    c++;
                }
                else if(nums[i+j+1] == nums[i+j] && pattern[j] == 0) {
                    c++;
                }
                else if(nums[i+j+1] < nums[i+j] && pattern[j] == -1) {
                    c++;
                } 
            }

            if(c == pattern.length)  ans++;
        }
        
        return ans;
    }
}