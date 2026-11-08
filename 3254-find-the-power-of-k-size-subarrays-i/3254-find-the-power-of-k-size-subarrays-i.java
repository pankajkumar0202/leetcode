class Solution {
    public int[] resultsArray(int[] nums, int k) {

        int n = nums.length;
        int arr[] = new int[n-k+1];
        for(int i = 0; i <= n-k; i++) {
            
            int c = 1;
            int x = 0;

            for(int j = i; j < i+k-1; j++) {

                if(nums[j] < nums[j+1] && nums[j]+1 == nums[j+1]) {
                    c++;
                }
                else {
                    break;
                }

                x = nums[j+1];
            }

            if(c == k) {
                arr[i] = x;
            }
            else {
                arr[i] = -1;
            }

            if(k == 1) {
                arr[i] = nums[i];
            }
        }

        return arr;
    }
}