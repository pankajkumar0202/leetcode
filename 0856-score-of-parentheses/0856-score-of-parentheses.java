class Solution {
    public int scoreOfParentheses(String s) {
        int c = 0, x = 0;
        int ans = 0;
        for(int i = 0; i<s.length(); i++) {
            if(s.charAt(i) == '(') {
              c++;
            }
            else {
                c--;
            }
            if(s.charAt(i) == ')' && s.charAt(i-1) == '(') {
                ans += (int)Math.pow(2,c);
            }
        }
        return ans;
    }
}