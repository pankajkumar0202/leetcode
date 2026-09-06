class Solution {
    public int xorAfterQueries(int[] nums, int[][] q) {
        for(int i = 0; i<q.length; i++) {
            int j = q[i][0];
            while(j <= q[i][1]) {
                long temp = (long) nums[j] * q[i][3];
                nums[j] = (int)(temp % 1000000007);
                j += q[i][2];
            }
        }
        int ans = 0;
        for(int i = 0; i<nums.length; i++) {
            ans = ans^nums[i];
        }
        return ans;
    }
}