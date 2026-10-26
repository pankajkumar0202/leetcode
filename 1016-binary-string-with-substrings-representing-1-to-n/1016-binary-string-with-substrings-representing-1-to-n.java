class Solution {
    public boolean queryString(String s, int n) {
        for(int i = 1; i<=n; i++) {
            
            String s1 = Integer.toBinaryString(i);

            if(!s.contains(s1))  return false; 
        }
        return true;
    }
}