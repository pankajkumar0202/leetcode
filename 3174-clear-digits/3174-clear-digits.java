class Solution {
    public String clearDigits(String s) {
        Stack<Character>st = new Stack<>();
        for(int i = 0; i<s.length(); i++) {
            st.push(s.charAt(i));
            if(st.peek() >= '0' && st.peek() <= '9') {
                st.pop();
                st.pop();
            }
        }
        String res = "";
        while(!st.empty()) {
            res += st.peek();
            st.pop();
        }
        StringBuilder sb = new StringBuilder(res);
        sb.reverse();
        
        return sb.toString();
    }
}