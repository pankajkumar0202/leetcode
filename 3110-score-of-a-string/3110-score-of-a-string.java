class Solution {
    public int scoreOfString(String s) {
        int sum = 0;
        for(int i = 0; i<s.length()-1; i++) {
            int n = s.charAt(i);
            int m = s.charAt(i+1);
            sum += Math.abs(n-m);
        }
        return sum;
    }
}