class Solution {
    public int minimumSumSubarray(List<Integer> nums, int l, int r) {
        int min = Integer.MAX_VALUE;

        for(int i = 0; i<nums.size(); i++) {

          int sum = 0;
          int c = 0;

          for(int j = i; j<nums.size(); j++) {

               sum += nums.get(j);
               c++;

               if(sum > 0) {

                    if(c >= l && c <= r)  min = Math.min(min, sum);
                    
                }
            }
        }

       if(min == Integer.MAX_VALUE)  return -1;

       return min;

    }
}