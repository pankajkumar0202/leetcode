class Solution {
    public List<Long> mergeAdjacent(int[] nums) {
        Stack<Long>st = new Stack<>();

        for(int i = 0; i<nums.length; i++) {
            if(!st.empty() && st.peek() == (long)nums[i]) {
                long sum = st.pop() + nums[i];
                while(!st.empty() && st.peek() == sum) {
                    sum = st.pop() + sum;
                }   
                st.push(sum);
            }
            else{
                st.push((long)nums[i]);
            }
        }
    
        List<Long>ans = new ArrayList<>();
        while(!st.empty()) {
            ans.add(st.peek());
            st.pop();
        }
        Collections.reverse(ans);
        return ans;
    }
}