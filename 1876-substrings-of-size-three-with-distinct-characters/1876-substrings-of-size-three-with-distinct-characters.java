class Solution {
    public int countGoodSubstrings(String s) {
        int c = 0;
        for(int i = 0; i<s.length()-2; i++) {
            char ch = s.charAt(i);
            char ch2 = s.charAt(i+1);
            char ch3 = s.charAt(i+2);
            if(ch != ch2 && ch2 != ch3 && ch3 != ch) c++;
        }
        return c;
    }
}