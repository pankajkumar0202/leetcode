class Solution {
    public int minimumPrefixLength(int[] nums) {
        List<Integer>ans = new ArrayList();
        int n = nums.length;
        int count = 0;
        for(int i = 0; i<nums.length-1; i++) {
            if(nums[i] < nums[i+1]) {
                count++;
            }
            else{
                count = 0;
            }
        } 
        return n-count-1;
    }
}