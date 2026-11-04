class Solution {
    public long countSubarrays(int[] nums, int k) {
        int max = 0;
        long c = 0;
        long t = 0;
        long ans = 0;

        for(int i = 0; i<nums.length; i++) {
            max = Math.max(max, nums[i]);
        }

        int j = 0;
        Map<Integer,Integer>mp = new HashMap<>();

        for(int i = 0; i<nums.length; i++) {
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
            if(nums[i] == max) c++;

            while(c >= k) {
                t++;
                if(nums[j] == max)  c--;
                j++;
                
            }

            ans += t;
        }
        
        return ans;
        
    }
}