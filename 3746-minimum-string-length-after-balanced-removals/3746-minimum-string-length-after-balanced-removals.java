class Solution {
    public int minLengthAfterRemovals(String s) {
        Stack<Character>st = new Stack<>();
        int a = 0, b = 0;
        for(int i = 0; i<s.length(); i++) {
            st.push(s.charAt(i));
            if(st.peek() == 'a') a++;
            else b++;   
        }
        return Math.abs(a-b);
    }
}