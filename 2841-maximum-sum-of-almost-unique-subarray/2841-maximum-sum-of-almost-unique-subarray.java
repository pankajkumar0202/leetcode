class Solution {
    public long maxSum(List<Integer> nums, int m, int k) {

        Map<Integer,Integer>mp = new HashMap<>();
        
        int j = 0;
        int c = 0;
        long max = 0;
        long sum = 0;

        for(int i = 0; i<nums.size(); i++) {

            mp.put(nums.get(i),mp.getOrDefault(nums.get(i),0)+1);
            c++;
            sum += nums.get(i);

            while(c > k) {

                mp.put(nums.get(j),mp.getOrDefault(nums.get(j),0)-1);
                if(mp.get(nums.get(j)) == 0)  mp.remove(nums.get(j));
                sum -= nums.get(j);
                c--;
                j++;

            }

            while(c == k && mp.size() >= m) {

                max = Math.max(max,sum);
                mp.put(nums.get(j),mp.getOrDefault(nums.get(j),0)-1);
                if(mp.get(nums.get(j)) == 0)  mp.remove(nums.get(j));
                sum = sum - nums.get(j);
                c--;
                j++;
            }
        }

        return max;
    }
}