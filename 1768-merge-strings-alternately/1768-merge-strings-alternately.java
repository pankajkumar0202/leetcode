class Solution {
    public String mergeAlternately(String w1, String w2) {
        int i = 0;
        int j = 0;
        String ans = "";
        while(i != w1.length() && j != w2.length()) {
            ans += w1.charAt(i);
            ans += w2.charAt(i);
            i++;
            j++;
        } 
        if(i < w1.length()) {
            for(int k  = i; k<w1.length(); k++) {
                ans += w1.charAt(k);
            }
        }
        if(j < w2.length()) {
            for(int k  = j; k<w2.length(); k++) {
                ans += w2.charAt(k);
            }
        }
        return ans;
    }
}