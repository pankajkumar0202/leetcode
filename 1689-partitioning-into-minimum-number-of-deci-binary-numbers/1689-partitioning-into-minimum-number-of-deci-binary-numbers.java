class Solution {
    public int minPartitions(String s) {
        int ans = 0;

        for(int i = 0; i<s.length(); i++) {
            char ch = s.charAt(i);
            ans = Math.max(ans,ch-'0');
        }
        
        return ans;
    }
}