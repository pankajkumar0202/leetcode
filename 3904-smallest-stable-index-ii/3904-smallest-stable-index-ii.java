class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n = nums.length;
        int arr[] = new int[n];
        int arr2[] = new int[n];

        int maxi = Integer.MIN_VALUE;
        int mini = Integer.MAX_VALUE;
        
         for(int i = 0; i<n; i++) {
            maxi = Math.max(maxi, nums[i]);
            arr[i] = maxi;
        }

        for(int i = n-1; i>=0; i--) {
            mini = Math.min(mini, nums[i]);
            arr2[i] = mini;
        }

        for(int i = 0; i<n; i++) {
            int temp = arr[i] - arr2[i];
            if(temp <= k) {
                return i;
            }
        }

        return -1;
         
    }
}