class Solution {
    public int equalSubstring(String s, String t, int maxCost) {

        int temp = 0;
        int j = 0;
        int ans = 0;

        for(int i = 0; i<s.length(); i++) {
            temp = temp + Math.abs((t.charAt(i)-'a') - (s.charAt(i)-'a'));

            while(temp > maxCost) {
                temp = temp - Math.abs((t.charAt(j)-'a') - (s.charAt(j)-'a'));
                j++;
            }

            ans = Math.max(ans,i-j+1);

        }
        return ans;
    }
}