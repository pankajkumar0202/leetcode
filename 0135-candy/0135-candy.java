class Solution {
    public int candy(int[] nums) {
       int n = nums.length;
       int arr [] = new int[n];
       if(n == 1)  return 1;
       if(nums[0] > nums[1]) arr[0] = 2;
       else arr[0] = 1;
       for(int i = 1; i<n; i++) {
           if(nums[i] > nums[i-1]) arr[i] = arr[i-1] + 1;
           else arr[i] = 1;
       }
       for(int i = n-2; i>=0; i--) {
           if(nums[i] > nums[i+1]) arr[i] = Math.max(arr[i], arr[i+1] + 1);
       }
       int res = 0;
       for(int i = 0; i<arr.length; i++) {
          res += arr[i];
       }
       return res;
    }
}