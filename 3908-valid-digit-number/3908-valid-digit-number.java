class Solution {
    public boolean validDigit(int n, int x) {
        String str = String.valueOf(n);
        int count1 = 0;
        int count = 0;
        for(int i = 0; i<str.length(); i++) {
            if(str.charAt(0) - '0' == x) {
              return false;
            }
            if(str.charAt(i) - '0' == x) {
                count++;
            }
            if(count == 1 ) {
                return true;
            }
        }
        return false;
    }
}