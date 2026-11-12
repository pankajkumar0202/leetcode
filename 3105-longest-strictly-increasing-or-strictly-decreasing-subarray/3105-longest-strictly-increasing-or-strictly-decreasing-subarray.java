class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int max = 1;
        int max1 = 1;
        int inc = 1;
        int dec = 1;
        
        for(int j = 0; j<nums.length-1; j++) {

            if(nums[j] < nums[j+1])  inc++;
            else inc = 1;
        
            if(nums[j] > nums[j+1])  dec++;
            else  dec = 1;
                
            max = Math.max(max,inc);
            max1 = Math.max(max1,dec);

        }

        return Math.max(max, max1);
    }
}