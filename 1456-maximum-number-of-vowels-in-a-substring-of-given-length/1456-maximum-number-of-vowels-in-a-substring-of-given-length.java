class Solution {

    static boolean isVow(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u';
    }
    public int maxVowels(String s, int k) {
        int max = Integer.MIN_VALUE;
        int c = 0;
        
        for(int i = 0; i<k; i++) {
           char ch = s.charAt(i);
           if (isVow(ch))  c++;
           max = Math.max(max, c);
        }

        for(int i = k; i<s.length(); i++) {
            char ch = s.charAt(i);
            char ch1 = s.charAt(i-k);
        
            if(isVow(ch)) c++;
            if(isVow(ch1)) c--;
            max = Math.max(max,c);
        }

        return max;
    }
}