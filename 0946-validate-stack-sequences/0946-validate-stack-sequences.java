class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        Stack<Integer>st = new Stack<>();
        int j = 0;
        for(int i = 0; i<pushed.length; i++) {
            st.push(pushed[i]);
            while(!st.empty() && st.peek() == popped[j]) {
                st.pop();
                j++;
            }
        }
        if(st.empty())  return true;
        return false;
    }
}