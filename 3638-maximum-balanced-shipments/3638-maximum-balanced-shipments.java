class Solution {
    public int maxBalancedShipments(int[] weight) {
        int max = Integer.MIN_VALUE;
        int ans = 0;
        Stack<Integer>st = new Stack<>();
        for(int i = 0; i<weight.length; i++) {
            st.push(weight[i]);
            if(!st.empty() && st.peek() >= max) {
                max  = st.peek();
            }
            else{
                if(st.peek() < max) ans++;
                while(!st.empty()) {
                    st.pop();
                }
                max = 0;
            }
        }
        return ans;
    }
}