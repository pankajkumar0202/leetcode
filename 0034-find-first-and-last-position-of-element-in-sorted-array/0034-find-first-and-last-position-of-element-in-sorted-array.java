class Solution {
    public int[] searchRange(int[] nums, int target) {
        int i = 0;
        int j = nums.length-1;
        int f = -1;
        int s = -1;
        while(i <= j) {
            int mid = (i+j)/2;
            if(nums[mid] > target) {
                j = mid-1;
            }
            else if(nums[mid] < target) {
                i = mid + 1;
            }
            else{
                f = mid;
                j = mid-1;
            } 
        }
        int st = 0;
        int end = nums.length-1;
         while(st <= end) {
            int mid = (st+end)/2;
            if(nums[mid] > target) {
                end = mid-1;
            }
            else if(nums[mid] < target) {
                st = mid + 1;
            }
            else{
                s = mid;
                st = mid+1;
            } 
        }
        return new int[] {f,s};
        
    }
}