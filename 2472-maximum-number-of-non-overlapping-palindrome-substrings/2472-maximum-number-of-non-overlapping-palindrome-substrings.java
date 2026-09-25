class Solution {
    boolean isPalindrome(String s, int i, int j) {
        while(i < j) {
            if(s.charAt(i) != s.charAt(j)) return false;
            i++;
            j--;
        }
        return true;
    }
    public int maxPalindromes(String s, int k) {
        int c = 0;
        for(int i = 0; i<=s.length()-k; i++) {
            String res = s.substring(i,i+k);
            if(isPalindrome(res, 0, res.length()-1)) {
                c++;
                i = i+k-1;
            }
            else if(i+k < s.length()) {
                res = s.substring(i,i+k+1);
                if(isPalindrome(res, 0, res.length()-1)) {
                   c++;
                   i = i+k;
                }
            }
        }
        
        return c; 
    }
}