class Solution {
    public List<String> buildArray(int[] target, int n) {
        Stack<Integer>st = new Stack<>();
        List<String>ans = new ArrayList<>();
        int j = 0;
        for(int i = 1; i<=n; i++) {
            st.push(i);
            if(target[j] == st.peek()) {
                ans.add("Push");
                j++;
            }
            else{
                ans.add("Push");
                ans.add("Pop"); 
            }
            if(j == target.length)  break;
        }
        return ans;
    }
}