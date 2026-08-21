class Solution {
    public int[] minOperations(String nums) {
        int ans [] = new int[nums.length()];
        for(int i = 0; i<nums.length(); i++) {
            int count = 0;
            for(int j = 0; j<nums.length(); j++) {
                char ch = nums.charAt(j);
                if(ch == '1') {
                    count += Math.abs(j-i);  
                }
            }
            ans[i] = count;  
        }
        return ans; 
    }
}