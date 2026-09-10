class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character>st = new Stack<>();
        int a  = 0;
        int b = 0;
        for(int i = 0; i<s.length(); i++) {
           char ch = s.charAt(i);
           if(ch == '(')  st.push(ch);
           if(!st.empty() && st.peek() == '(' && ch == ')') {
              st.pop();
            }
            else if(st.empty() || ch == ')') {
                st.push(ch);
            }
            
        }
        return st.size();
    }
}