class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int c = 0, x = 0, j = 0, ans = 0;
    
        for(int i = 0; i<nums.length; i++) {
            if(nums[i] % 2 != 0) {
                x = 0;
                c++;
            }
            while(c == k) {
                if(nums[j] % 2 != 0)  c--;
                x++;
                j++;
            }
            ans += x;
        }

        return ans;
    }
}