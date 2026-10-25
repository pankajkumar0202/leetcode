class Solution {
    public int numberOfSubstrings(String s, int k) {
        int c = 0;
        int t = 0;
        int ans = 0;
        int freq [] = new int[26];
        for(int i = 0; i<s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
            while(freq[s.charAt(i) - 'a'] >= k) {
                freq[s.charAt(t) - 'a']--;
                t++;
                c++;
            }
            ans += c;
        }
        return ans;
    }
}