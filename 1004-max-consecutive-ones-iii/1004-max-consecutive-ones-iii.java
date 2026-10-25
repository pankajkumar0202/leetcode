class Solution {
    public int longestOnes(int[] nums, int k) {
         int left=0;
        int max=0;
       Map<Integer,Integer>mp=new HashMap<>();
       for(int i=0;i<nums.length;i++){
        mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        while(nums[i]==0 && mp.get(nums[i])>k){
            mp.put(nums[left],mp.getOrDefault(nums[left],0)-1);
            left++;
        }
        max=Math.max(max,i-left+1);
       } 
       return max;
    }
}