class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer,Integer>mp = new HashMap<>();
        for(int i : nums) {
            mp.put(i,mp.getOrDefault(i,0) + 1);
        }
        for(int key: mp.keySet()) {
            int value = mp.get(key);
            if(value == 1) return key;
        }
        return -1;
    }
}