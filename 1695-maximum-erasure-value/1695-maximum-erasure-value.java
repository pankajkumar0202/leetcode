class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int arr [] = new int[100000];
        int j = 0;
        int max = 0;
        int sum = 0;

        for(int i = 0; i<nums.length; i++) {
            arr[nums[i]]++;
            sum += nums[i];

            while(arr[nums[i]] > 1) {
                arr[nums[j]]--;
                sum -= nums[j];
                j++;
            }
            
            max = Math.max(max, sum);
        }

        return max;
        
    }
}