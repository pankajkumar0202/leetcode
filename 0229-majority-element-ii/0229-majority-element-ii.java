class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer,Integer>mp = new HashMap<>();
        List<Integer>ans = new ArrayList<>();
        int n = nums.length;
        for(int i: nums) {
            mp.put(i,mp.getOrDefault(i,0) + 1);
        }
        for(int key: mp.keySet()) {
            if(mp.get(key) > n/3) {
                ans.add(key);
            }
        }
        return ans;
    }
}