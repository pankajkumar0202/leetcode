class Solution {
    public int firstUniqueEven(int[] nums) {
        int temp = -1;
        boolean[]arr = new boolean[nums.length];
        for (int i = 0; i < nums.length; i++) {
           if (arr[i] == true) continue;
           int count = 1;
           arr[i] = true;
           for (int j = i+1; j < nums.length; j++) {
               if (nums[i] == nums[j]) {
                   count++;
                   arr [j] = true;
                }
            }
            if (count == 1 && nums[i] % 2 == 0) {
                temp = nums[i];
                break;
            }
        }
        return temp;
    }
}