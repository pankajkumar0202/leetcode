class Solution {
    public int arrangeCoins(int n) {
        int count = 0;
        int temp = 0;
        for(int i = 1; i <= n; i++) {
            count++;
            n = n - count;
            if(n < 0) temp = count - 1;
        }
        return count;
    }
}