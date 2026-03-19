class Solution {
    public int climbStairs(int n) {
    int x = 0;
    int y = 1;
    int next = 0;
    for(int i = 0; i < n; i++) {
        next = x + y;
        x = y;
        y = next;
    }
     return next;
    }
}