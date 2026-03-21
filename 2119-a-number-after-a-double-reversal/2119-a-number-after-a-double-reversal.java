class Solution {
    public boolean isSameAfterReversals(int num) {
        int rev = 0;
        int temp = num;
        while(temp != 0) {
          int ld = temp % 10;
          rev = rev * 10 + ld;
          temp /= 10;
        }
        int num2 = rev;
        int rev2 = 0;
        while(num2 != 0) {
            int ld1 = num2 % 10;
            rev2 = rev2 * 10 + ld1;
            num2 /= 10;
        }
        if(rev2 == num) {
            return true;
        }
        return false;    
    }
}