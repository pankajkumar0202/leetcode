class Solution {
    public int maximumPossibleSize(int[] nums) {
        Stack<Integer>st = new Stack<>();
        int temp = nums[0];
        for(int i = 0; i<nums.length; i++) {
            if(temp <= nums[i]) {
                st.push(nums[i]);
                temp = nums[i];
            }
        }
        return st.size();
    }
}