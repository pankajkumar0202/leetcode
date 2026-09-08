class Solution {
    public int countCommas(int n) {
        String ans = Integer.toString(n);
        int res = 0;
        if(ans.length() >= 4) {
            return (n - 1000)+1;
        }
        return 0;
    }
}