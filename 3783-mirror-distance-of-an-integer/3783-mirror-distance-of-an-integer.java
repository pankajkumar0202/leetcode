class Solution {
    public int mirrorDistance(int n) {
        int temp = n;
        int rev = 0;
        while(temp != 0) {
            int ld = temp % 10;
            rev = rev * 10 + ld;
            temp /= 10;
        }
        return Math.abs(n - rev);
    }
}