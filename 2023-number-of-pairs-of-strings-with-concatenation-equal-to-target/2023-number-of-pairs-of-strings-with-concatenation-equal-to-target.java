class Solution {
    public int numOfPairs(String[] nums, String target) {
        int c = 0;

        for(int i = 0; i<nums.length; i++) {
            String ans = nums[i];

            for(int j = 0; j<nums.length; j++) {
                String res = ans + nums[j];

                if(i != j) {
                    if(res.equals(target))  c++; 
                }
            }
        }
        
        return c;
    }
}