class Solution {
    public int minMergedInteger(int[] nums) {

        int c = 0;
        int min = Integer.MAX_VALUE;
        int temp = 0;

        for(int i = 0; i<nums.length; i+=2) {

           String s = String.valueOf(nums[i+1]);
           if(s.length() == 1)  c = 10;
           else if(s.length() == 2)  c = 100;
           else if(s.length() == 3)  c = 1000;
           else c = 10000; 
           temp = (nums[i] * c) + nums[i+1];
           min = Math.min(min,temp);

        }

        return min;
    }
}