class Solution {
    public String resultingString(String s) {
        Stack<Character>st=new Stack<>();
        for(int i=0; i<s.length(); i++) {
            int temp = s.charAt(i);
            if(!st.empty() && (st.peek() == (char)temp + 1 || st.peek() == (char)temp-1)) {
                st.pop();  
            }
           else if(!st.empty() && (st.peek() == (char)temp + 25 || st.peek() == (char)temp - 25)) {
            st.pop();
           }
            else{
                st.push(s.charAt(i));
            }
        }
        StringBuilder sb = new StringBuilder();
        while(!st.empty()) {
            sb.append(st.peek());
            st.pop();
        }
        sb.reverse();
        return sb.toString();
    }
}