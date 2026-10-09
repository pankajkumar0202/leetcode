class Solution {
    public int maximumLengthSubstring(String s) {
        int freq[] = new int[100];
        int j = 0;
        int max = 0;
        for(int i = 0; i<s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
            while(freq[s.charAt(i) - 'a'] > 2) {
                freq[s.charAt(j) - 'a']--;
                j++;
                
            }
            max = Math.max(max, i-j+1);
        }
        
        return max;
    }
}