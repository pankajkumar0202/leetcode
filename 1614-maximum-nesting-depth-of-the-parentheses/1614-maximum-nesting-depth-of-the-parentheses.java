class Solution {
    public int maxDepth(String s) {
        int x = 0;
        int y = 0;
        int res = 0;
        for(int i = 0; i<s.length(); i++) {
            char ch = s.charAt(i);
            if(ch == '(') {
                x++;
            }
            else if(ch == ')') {
                y--;
                x--;
            }
            res = Math.max(res,x);
        }
        return res;
    }
}