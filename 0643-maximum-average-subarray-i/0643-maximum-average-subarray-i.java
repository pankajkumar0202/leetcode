class Solution {
    public double findMaxAverage(int[] nums, int k) {
       double maxSum = Double.NEGATIVE_INFINITY;
       for(int i = 0; i<=nums.length-k; i++) {
        
        int sum = 0;

        for(int j = i; j<i+k; j++) {
            sum += nums[j];
        }

        double average = (double) sum/k;
        maxSum = Math.max(maxSum,average);
       }

       return maxSum;
    }
}