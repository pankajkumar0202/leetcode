class Solution {
    public int longestContinuousSubstring(String s) {
        int freq[] = new int[26];
        int max = 1;
        int c = 1;

        for(int i = 0; i<s.length()-1; i++) {
            int temp = s.charAt(i) -'a';
            if(temp+1 == s.charAt(i+1) -'a') c++;
            else c = 1;
            max = Math.max(max, c);
        }
        
        return max;
    }
}