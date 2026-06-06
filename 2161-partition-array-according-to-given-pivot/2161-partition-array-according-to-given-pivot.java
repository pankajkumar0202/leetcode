class Solution {
    public int[] pivotArray(int[] nums, int p) {
        int [] arr = new int[nums.length];
        int k = 0;
        for(int i = 0; i<nums.length; i++) {
            if(nums[i] < p) {
                arr[k] = nums[i];
                k++;
            }
        }
        int j = nums.length-1;
        for(int i = nums.length-1; i>=0; i--) {
            if(nums[i] > p) {
                arr[j] = nums[i];
                j--;
            }
        }
        for(int i = 0; i<nums.length; i++) {
            if(nums[i] == p) {
                arr[k] = nums[i];
                k++;
            }
        }
        return arr;    
    }
}