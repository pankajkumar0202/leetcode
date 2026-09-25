class Solution {
    boolean isPalindrome(String s,int i, int j) {

        while(i < j) {
            if(s.charAt(i) != s.charAt(j))  return false;
            i++;
            j--;
        }
        return true;
    }

    public int maxPalindromes(String s, int k) {
        int count = 0;

        for (int i = 0; i <= s.length() - k; i++) {
            String temp = s.substring(i, i + k);

            if (isPalindrome(temp,0,temp.length()-1)) {
                count++;
                i += k - 1;
            }

            else if (i + k < s.length()) {
                temp = s.substring(i, i + k + 1);

                if (isPalindrome(temp,0,temp.length()-1)) {
                    count++;
                    i += k;
                }
            }
        }
        
        return count;
    }
}