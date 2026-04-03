class Solution {
    public int[] getConcatenation(int[] nums) {
        int [] arr = new int [nums.length *2];
        int k = 0 , count = 0;
        while(count != 2) {
            for(int i = 0; i < nums.length; i++) {
                arr[k] = nums[i];
                k++;
            }
            count++;
        }
        return arr;
    }
}