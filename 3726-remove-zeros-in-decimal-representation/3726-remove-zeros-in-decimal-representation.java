class Solution {
    public long removeZeros(long n) {
        String str = String.valueOf(n);
        String str2 = "";
        for(int i = 0; i<str.length(); i++) {
            if(str.charAt(i) != '0') {
               str2 += str.charAt(i);
            }
        }
        return Long.parseLong(str2); 
    }
}